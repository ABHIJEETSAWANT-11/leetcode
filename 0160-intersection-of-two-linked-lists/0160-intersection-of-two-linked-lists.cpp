/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0;
        int len2=0;
        ListNode*tempA=headA;
        while(tempA !=NULL){
                len1++;
                tempA=tempA->next;
        }
        ListNode*tempB=headB;
          while(tempB !=NULL){
                len2++;
                tempB=tempB->next;
        }
         tempA=headA;
        tempB=headB;
          int  lendiff=0;
        if(len1>len2){
          lendiff=len1-len2;
        for(int i=0;i<lendiff;i++){ tempA=tempA->next;
        }
    }
         else {
            lendiff=len2-len1; 
         for(int i=0;i<lendiff;i++){ tempB=tempB->next;
             }
         }
       
        while(tempA!=NULL && tempB != NULL){
          
            if(tempA==tempB){
              return tempA;
            }
            tempA=tempA->next;
            tempB=tempB->next;
                 
            
        }
        
            return NULL;
    }
};