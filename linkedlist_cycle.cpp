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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode *slow = head;
        ListNode *fast = head->next->next;
        while(fast != slow){
            if(fast == NULL ||fast->next == NULL){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};

//using hash_table

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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,int> m;
        if(head == NULL || head->next == NULL)return false;
        m[head]  = 0;
        int i = 1;
        head = head->next;
        while(head){
            if(m.find(head) == m.end()){
                m[head] = i++;
            }
            else{
                return true;
            }
            head = head->next;
        }
        return false;
    }
};
