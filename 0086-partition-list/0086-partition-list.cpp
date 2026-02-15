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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smalldummy = new ListNode(0);
        ListNode* largedummy = new ListNode(0);

        ListNode* small = smalldummy;
        ListNode* large = largedummy;

        while(head != NULL){
            if(head -> val < x){
                small -> next = head;
                small = small -> next;
            }else{
                large -> next = head;
                large = large -> next;
            }
            head = head -> next;
        }
        small -> next = largedummy -> next;
        large -> next = NULL;
        
        return smalldummy -> next;
    }
};