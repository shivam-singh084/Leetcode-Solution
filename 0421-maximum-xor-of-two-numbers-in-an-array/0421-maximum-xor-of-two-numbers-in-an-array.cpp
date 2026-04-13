class Solution {
public:
    struct Node{
        Node* left;
        Node* right;
    };

    void insert(Node* root, int &num){
        Node* curr = root;

        for(int i = 31; i >= 0; i--){
            int ith = (num >> i) & 1;

            if(ith == 0){
                if(curr -> left == NULL){
                    curr -> left = new Node();
                }
                curr = curr -> left;
            }else{
                if(curr -> right == NULL){
                    curr -> right = new Node();
                }
                curr = curr -> right;
            }
        }
    }

    int findXor(Node* root, int &num){
        int maxXor = 0;
        Node* curr = root;
        for(int i = 31; i >= 0; i--){
            int ith = (num >> i) & 1;

            if(ith == 1) {
                if(curr->left != NULL) {
                    maxXor += pow(2, i);  
                    curr =  curr->left;
                } else {

                    curr =  curr->right;
                }
            } else {
                if(curr->right != NULL) {
                    maxXor += pow(2, i);
                    curr=  curr->right;
                } else {
                    curr=  curr->left;
                }
            }
        }
        return maxXor;
    }

    int findMaximumXOR(vector<int>& nums) {
        Node* root = new Node();
        for(int &num : nums){
            insert(root, num);
        }

        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int temp = findXor(root, nums[i]);
            ans = max(ans, temp);
        }
        return ans;
    }
};