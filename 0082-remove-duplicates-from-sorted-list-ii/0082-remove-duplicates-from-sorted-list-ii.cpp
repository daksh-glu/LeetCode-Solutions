class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        while (prev->next) {
            ListNode* cur = prev->next;
            while (cur->next && cur->next->val == cur->val)
                cur = cur->next;
            if (cur != prev->next)
                prev->next = cur->next;
            else
                prev = prev->next;
        }
        return dummy->next;
    }
};