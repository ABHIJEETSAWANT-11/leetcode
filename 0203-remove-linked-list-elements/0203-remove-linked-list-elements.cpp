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
    ListNode* removeElements(ListNode* head, int val) {
       /* ListNode*temp= head;
        for(int i=0;i<size;i++){
            if(Node.val == val)
            temp->next=temp->next->next;
        }*/
               // Create a dummy node before the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* temp = dummy;

        while (temp->next != nullptr) {
            if (temp->next->val == val) {
                ListNode* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;   // Free memory
            } else {
                temp = temp->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy;   // Free dummy node
        return newHead;
    }
};