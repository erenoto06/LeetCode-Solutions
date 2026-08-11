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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* right;
        if (fast == nullptr) {
            right = slow;
        }
        else {
            right = slow->next;
        }
        ListNode* prev = nullptr;
        ListNode* curr = right;
        while (curr != nullptr) {
            ListNode* tempNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tempNext;

        }
        ListNode* currHead = head;
        while (prev != nullptr) {
            if (currHead->val != prev->val) {
                return false;
            }
            else {
                currHead = currHead->next;
                prev = prev->next;
            }


        }
        return true;
        
    }
};