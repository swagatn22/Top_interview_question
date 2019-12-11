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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *start = NULL;
        ListNode *cur = NULL;
        ListNode *ptr1 = l1;
        ListNode *ptr2 = l2;
        start = l1;
        ListNode *temp = NULL;
        if(l1 == NULL)return l2;
        if(l2 == NULL)return l1;
        if(ptr1->val > ptr2->val){
            start = ptr2;
            cur = ptr2;
            ptr2 = ptr2->next;
        }
        else{
            start = ptr1;
            cur = ptr1;
            ptr1 = ptr1->next;
        }
        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1->val < ptr2->val){
                temp = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                temp = ptr2;
                ptr2 = ptr2->next;
            }
            cur->next = temp;
            cur = cur->next;
        }
        if(ptr1 == NULL){
            cur ->next = ptr2;
        }
        else{
            cur->next = ptr1;
        }
     return start;   
    }
};
