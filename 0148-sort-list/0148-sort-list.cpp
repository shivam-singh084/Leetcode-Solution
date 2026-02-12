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
    ListNode* Findmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right){
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(left != NULL && right != NULL){
            if(left -> val < right -> val){
                temp -> next = left;
                left = left -> next;
            }
            else{
                temp -> next = right;
                right = right -> next;
            }
            temp = temp -> next;
        }

        if(left == NULL) temp -> next = right;
        if(right == NULL) temp -> next = left;

        return dummy -> next;
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* mid = Findmid(head);
        ListNode* righthead = mid -> next;
        mid -> next = NULL;

        ListNode* left = sortList(head);
        ListNode* right = sortList(righthead);

        return merge(left, right);


    }
};