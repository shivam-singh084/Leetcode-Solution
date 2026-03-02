/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void dfs(TreeNode* root, string &s){
        if(root == NULL){
            s = s + "#,";
            return;
        }
        s = s + to_string(root -> val) + ",";
        dfs(root -> left, s);
        dfs(root -> right, s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        dfs(root, s);
        return s;
    }

    TreeNode* build(vector<string>& arr, int &idx){
        if(arr[idx] == "#"){
            idx++;
            return NULL;
        }
        TreeNode* root = new TreeNode(stoi(arr[idx]));
        idx++;
        root -> left = build(arr, idx);
        root -> right = build(arr, idx);
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> arr;
        string temp = "";
        for(int i = 0; i < data.length(); i++){
            if(data[i] == ','){
                arr.push_back(temp);
                temp = "";
            }else{
                temp = temp + data[i];
            }
        }
        int idx = 0;
        return build(arr, idx);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));