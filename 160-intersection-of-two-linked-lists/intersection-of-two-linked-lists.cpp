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
        ListNode* top = headA;
        ListNode* bottom = headB;
        while (top != bottom) {
            if (top == nullptr) {
                top = headB;
            }
            else {
                top = top->next;
            }
            if (bottom == nullptr) {
                bottom = headA;
            }
            else {
                bottom = bottom->next;
            }
        
        }
        return top;
        
    }
};