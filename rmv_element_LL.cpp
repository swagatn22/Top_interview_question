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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *cur = head;
        ListNode *prv = NULL;
        while(cur!= NULL){
            if(cur->val == val){
                if(prv == NULL){
                    head = cur->next;
                }
                else{
                    prv->next = cur->next;
                }
            }
            else{
                prv = cur;
            }
            cur = cur->next;
        }
        return head;
    }
};
