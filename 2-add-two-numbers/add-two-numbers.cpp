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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* head = new ListNode();
        ListNode* tail = head;
        
        bool isCarry = false;
        while (curr1 != nullptr || curr2 != nullptr) {
            int sum = 0;
            if (curr1 != nullptr) {
                sum += curr1->val;
                curr1 = curr1->next;
            }
            if (curr2 != nullptr) {
                sum += curr2->val;
                curr2 = curr2->next;
            }
            int added;
            if (isCarry) { sum += 1; }
            if (sum >= 10) {
                isCarry = true;
                added = sum - 10;
            }
            else {
                isCarry = false;
                added = sum;
            }
            tail->next = new ListNode(added);
            tail = tail->next;
        }
        if (isCarry) {
            tail->next = new ListNode(1);
        }
        return head->next;
    }
};