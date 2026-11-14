class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        
        // Move fast to the k-th node from the beginning
        for (int i = 1; i < k; i++) {
            fast = fast->next;
        }
        
        ListNode* first = fast;
        ListNode* slow = head;
        
        // Move both until fast reaches the end; slow lands on k-th from end
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        swap(first->val, slow->val);
        return head;
    }
};