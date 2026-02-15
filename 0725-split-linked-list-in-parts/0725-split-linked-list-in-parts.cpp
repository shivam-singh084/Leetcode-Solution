/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr = head;
        int cnt = 0;
        while(curr != NULL){
            cnt++;
            curr = curr -> next;
        }

        int eachbucketNode = cnt/k;
        int extraNode = cnt%k;

        vector<ListNode*> result(k, NULL);
        curr = head;
        ListNode* prev = NULL;

        for(int i = 0; i < k; i++){
            result[i] = curr;

            for(int count = 1; count <= eachbucketNode + (extraNode > 0 ? 1:0); count++){
                prev = curr;
                curr = curr -> next;
            }
            if(prev != NULL)
                prev -> next = NULL;
            
            extraNode--;
        }
        return result;
    }
};