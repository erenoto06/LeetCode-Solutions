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
        
        ListNode* curr = head;
        ListNode* prev;
        int size = 0;
        while (curr != nullptr) {
            size++;
            curr = curr->next;
        }
        if (size == 0) { return head; }

        while (k >= size) {
            k -= size;
        }

        for (int i = 0;i < k;i++) {
            curr = head;
            prev = nullptr;
            while (curr->next != nullptr) {
                prev = curr;
                curr = curr->next;
            }
            curr->next = head;
            prev->next = nullptr;
            head = curr;
        }
        return head;
    }
};