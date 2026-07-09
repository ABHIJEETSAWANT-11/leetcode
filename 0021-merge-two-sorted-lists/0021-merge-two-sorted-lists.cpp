
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* tempA = a;
        ListNode* tempB = b;
// Dummy node
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        while (tempA != NULL && tempB != NULL) {

            if (tempA->val <= tempB->val) {
                ListNode* t = new ListNode(tempA->val);
                tempC->next = t;
                tempC = t;

                tempA = tempA->next;
            }
            else {

                ListNode* t = new ListNode(tempB->val);
                tempC->next = t;
                tempC = t;

                tempB = tempB->next;
            }
        }

        // Attach remaining nodes
        if (tempA == NULL) {
            tempC->next = tempB;
        }

        if (tempB == NULL) {
            tempC->next = tempA;
        }

        // Return merged list (skip dummy node)
        return c->next;
    }
};