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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode* tail = head;
        int size = 1;
        while (tail->next != nullptr) {
            tail = tail->next;
            size++;
        }
        k %= size;
        if (k == 0) { return head; }
        tail->next = head;
        int stepsToMove = size - k;
        ListNode* newtail = head;
        for (int i = 1;i < stepsToMove;i++) {
            newtail = newtail->next;
        }
        head = newtail->next;
        newtail->next = nullptr;
        return head;
    }
};