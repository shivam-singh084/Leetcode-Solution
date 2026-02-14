/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* currnext = curr -> next;
            curr -> next = new Node(curr -> val);
            curr -> next -> next = currnext;
            curr = currnext;
        }
        curr = head;
        while(curr != NULL){
            if(curr -> random == NULL){
                curr -> next -> random = NULL;
            }else{
                curr -> next -> random = curr -> random -> next;
            }
            curr = curr -> next -> next;
        }
        Node* newhead = head -> next;
        Node* newcurr = newhead;
        curr = head;
        while(curr != NULL && newcurr != NULL){
            curr -> next = curr -> next == NULL ? NULL : curr -> next -> next;
            newcurr -> next = newcurr -> next == NULL ? NULL : newcurr -> next -> next;

            curr = curr -> next;
            newcurr = newcurr -> next;
        }
        return newhead;
    }
};