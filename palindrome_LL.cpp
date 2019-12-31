// O(n) && O(n)
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
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> s;
        ListNode* p = head;
        while(p != NULL){
            s.push(p);
            p = p->next;
        }
        p = NULL;
        while(head){
            if(!s.empty()){
                p = s.top();
                s.pop();
            }
            if(p->val != head->val){
                return false;
            }
            head = head->next;
        }
        return true;
    }
};


#SUBMISSION 2:
Time Complexity:O(n)
Space Complexity:O(1)
// when fast pointer will reach to the end at tht time slow point will point to the starting node of the second half (even length)
for the odd length we have to increase the one more time, and now reverse the second half. and now compare first half with second half. 
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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* firstH = head;
        ListNode* secondH = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast){
            slow = slow->next;
        }
        secondH = slow;
        ListNode *prv = NULL;
        ListNode *Nxt = slow;
        while (secondH != NULL){
            Nxt = secondH->next;
            secondH->next = prv;
            prv = secondH;
            secondH = Nxt;
        }
        secondH = prv;
        while(secondH){
            if(firstH->val == secondH->val){
                secondH = secondH->next;
                firstH = firstH->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
