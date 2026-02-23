// Problem: Add Two Numbers
// Difficulty: Medium
// Topic: Linked List, Simulation

// Key Idea:
// Each linked list stores digits in reverse order.
// We simulate manual addition digit-by-digit while
// keeping track of carry from the previous sum.

// Algorithm:
// 1. Traverse both lists simultaneously.
// 2. Add corresponding digits and carry.
// 3. Store (sum % 10) in a new node.
// 4. Update carry (sum / 10).
// 5. Continue until both lists and carry are finished.

// Time Complexity: O(max(n,m))
// Space Complexity: O(max(n,m))

# Code
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
        ListNode* start = new ListNode(0);
        ListNode* current = start;

        int carry=0;

        while(l1 != nullptr || l2!=nullptr||carry!=0){
            int sum = carry;

            if(l1!=nullptr){
                sum+=l1->val;
                l1=l1->next;
            }

            if(l2!=nullptr){
                sum+=l2->val;
                l2=l2->next;
            }

            carry=sum/10;
            int digit = sum % 10;

            current->next = new ListNode(digit);
            current=current->next;
        }

        return start->next;
    }
};