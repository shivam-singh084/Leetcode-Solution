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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head -> next;
        int i = 1;
        int previousCP = 0;
        int firstCP    = 0;
        int MinDis = INT_MAX;

        while(curr -> next != NULL){
            if((curr->val > curr -> next-> val && curr -> val > prev -> val) || 
               (curr->val < curr -> next-> val && curr -> val < prev -> val)){

                if(previousCP == 0){
                    previousCP = i;
                    firstCP = i;
                }
                else{
                    MinDis = min(MinDis, i - previousCP);
                    previousCP = i;
                }

            }
            i++;
            prev = curr;
            curr = curr -> next;
        } 
        if(MinDis == INT_MAX){
            return {-1, -1};
        }
        return {MinDis, previousCP - firstCP};
    }
};