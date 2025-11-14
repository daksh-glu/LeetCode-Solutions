class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* n = head->next;
        head->next = swapPairs(n->next);
        n->next = head;
        return n;
    }
};
