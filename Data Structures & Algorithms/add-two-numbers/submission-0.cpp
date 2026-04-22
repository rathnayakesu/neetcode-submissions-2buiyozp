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

        // Dummy node — so we don't deal with head edge cases
        ListNode dummy(0);
        ListNode* curr = &dummy;

        int carry = 0;

        // Continue while either list has nodes OR there's a carry left
        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry; // start with carry from previous step

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;        // carry for next iteration
            int digit = sum % 10;   // digit to store in new node

            curr->next = new ListNode(digit);
            curr = curr->next;
        }

        return dummy.next; // skip the dummy, return real head
    }
};