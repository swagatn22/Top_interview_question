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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        int carry = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* res = new ListNode(0);
        ListNode* cur = res;
        while(temp1 != NULL || temp2 != NULL){
            int x = (temp1 != NULL) ? temp1->val : 0;
            int y = (temp2 != NULL) ? temp2->val : 0;
            sum = x+y+carry;
            carry = sum/10;
            cur->next = new ListNode(sum%10);
            cur = cur->next;
            if(temp1 != NULL){
                temp1 = temp1->next;
            }
            if(temp2 != NULL){
                temp2 = temp2->next;
            }
        }
        if(carry > 0){
            cur->next = new ListNode(carry);
        }
        return res->next;
        
    }
};
