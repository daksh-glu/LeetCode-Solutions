class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* nxt = removeNodes(head->next);
        if (nxt->val > head->val) return nxt;
        head->next = nxt;
        return head;
    }
};
