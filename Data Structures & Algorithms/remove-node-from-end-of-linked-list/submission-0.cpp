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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode dummy(0);
        dummy.next = head;

        int count = 0 ;
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;


        while (count < n){
            fast = fast->next;
            count++;
            
        }

        while (fast && fast->next){
            fast = fast->next;
            slow = slow->next;
        }

        // ListNode* to_delete = slow->next;

        // if(to_delete->next == this->tail){
        //     this->tail = slow;
        // }
        // slow->next = to_delete->next;
        // free(to_delete);
        ListNode* newnxt = slow->next ? slow->next->next : slow->next;;
        slow->next = newnxt;
        return dummy.next;
        
    }
};
