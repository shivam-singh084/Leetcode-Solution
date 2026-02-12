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
    ListNode* reverse(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* last = reverse(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        return last;
    }
    bool isPalindrome(ListNode* head) {

        if(head == NULL || head -> next == NULL){
            return true;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            prev = slow;
            fast = fast -> next -> next;
        }

        ListNode* tail = reverse(slow);
        prev -> next = NULL;

        while(tail != NULL && head != NULL){
            if(tail -> val != head -> val){
                return false;
            }
            tail = tail -> next;
            head = head -> next;
        }
        return true;
    }
};