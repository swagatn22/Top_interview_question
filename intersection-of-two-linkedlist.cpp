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
        if(!headA || !headB)return NULL;
        ListNode *head1 = headA;
        ListNode *head2 = headB;
        int length1 = 0;
        int length2 = 0;
        while(head1){
            length1 ++;
            head1 = head1->next;
        }
        head1 = headA;
        while(head2){
            length2 ++;
            head2 = head2->next;
        }
        head2 = headB;
        int k;
        if(length2>length1){
            k = length2-length1;
            while(k){
                head2 = head2->next;
                k--;
            }
            while(head1 != head2){
                head1 = head1->next;
                head2 = head2->next;
            }
            if(!head1 && !head2){
                return NULL;
            }
            else{
                return head1;
            }
        }
        else{
            k = length1-length2;
            while(k){
                head1 = head1->next;
                k--;
            }
            while(head1 != head2){
                head1 = head1->next;
                head2 = head2->next;
            }
            if(!head1 && !head2){
                return NULL;
            }
            else{
                return head1;
            }
        }
        
    }
};
