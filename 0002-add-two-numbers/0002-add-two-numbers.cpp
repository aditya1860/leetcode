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
        // Initialize a dummy node to simplify the process
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        int carry = 0;

        // Loop through both linked lists until both are exhausted
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            // Extract values from the current nodes of l1 and l2, defaulting to 0 if one is shorter
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            // Calculate the sum of the current digits plus any carry from the previous operation
            int total = val1 + val2 + carry;
            carry = total / 10;  // Update the carry (for the next digit)

            // Create a new node with the current digit (total % 10)
            current->next = new ListNode(total % 10);

            // Move to the next nodes in the linked lists
            current = current->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        // Return the result, starting from the next node after the dummy node
        return dummy->next;
    }
};
