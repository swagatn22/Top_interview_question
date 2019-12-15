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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp;
        temp = NULL;
        ListNode *prv = NULL;
        ListNode *cur = head;
        while(cur != NULL)
        {
            temp = cur->next;
            cur->next = prv;
            prv = cur;
            cur = temp;
            
        }
        return prv;
        
    }
};
