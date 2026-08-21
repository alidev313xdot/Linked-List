// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/
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
    ListNode* deleteMiddle(ListNode* head) {
        // If the list is empty or has only one node, deleting middle results in empty list
        if (!head || !head->next) return nullptr;

        ListNode* temp = nullptr; 
        ListNode* slow = head; 
        ListNode* fast = head; 

        while (fast && fast->next) {
            temp = slow; 
            slow = slow->next; 
            fast = fast->next->next; 
        }
        
        temp->next = slow->next;
        
        return head;  
    }
};
