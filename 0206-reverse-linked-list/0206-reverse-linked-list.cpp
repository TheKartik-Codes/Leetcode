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
    ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL; // Previous node
    ListNode* curr = head; // Current node
    while (curr != NULL) {
        ListNode* next = curr->next; // Save the next node
        curr->next = prev;          // Reverse the pointer
        prev = curr;                // Move prev forward
        curr = next;                // Move curr forward
    }
    return prev; // New head of the reversed list   
    }
};