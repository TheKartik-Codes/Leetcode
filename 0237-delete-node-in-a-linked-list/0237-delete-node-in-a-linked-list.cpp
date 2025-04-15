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
    void deleteNode(ListNode* node) {
    node->val = node->next->val;  // Copy the value of the next node into the current node
    ListNode* temp = node->next; // Store the next node in a temporary pointer
    node->next = node->next->next; // Update the current node's next pointer to skip the next node
    delete temp; // Free the memory of the skipped node
}   
    
};