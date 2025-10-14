class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        
        while (count >= k) {
            curr = prev->next;
            ListNode* next = curr->next;
            
            for (int i = 1; i < k; i++) {
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            
            prev = curr;
            count -= k;
        }
        
        return dummy->next;
    }
};