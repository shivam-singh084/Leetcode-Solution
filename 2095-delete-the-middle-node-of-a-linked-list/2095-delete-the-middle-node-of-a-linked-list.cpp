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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy -> next = head;
        ListNode* prev = dummy;
        ListNode* slow = head;   
        ListNode* fast = head;
        if(head == NULL || head -> next == NULL) return NULL; 
        while(fast != NULL && fast -> next != NULL){
            prev = prev -> next;
            slow = slow -> next;
            fast = fast -> next -> next;   
        }
        
        prev -> next = slow -> next;
        slow -> next = NULL;
        return head;
    }
};