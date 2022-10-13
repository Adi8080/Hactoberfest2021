// https://leetcode.com/problems/remove-linked-list-elements/

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
        ListNode * n = head;
        ListNode * p = head;
        while(n){
            if(n->val == val){
                if(n == head){
                    n = n->next;
                    head = n;
                    p = head;
                }
                else{
                    n = n->next;
                    p ->next = n;
                }
            }
            else{
                p = n;
                n = n->next;
            }
        }
        return head;
    }
};