/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reversell(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }

        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while (temp) {
            n++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 0; i < n / 2; i++) {
            temp = temp->next;
        }

        ListNode* head2 = reversell(temp);
        ListNode* temp2 = head2;
        int maxsum = 0;
        for (int i = 0; i < n / 2; i++) {
            int sum = 0;
            sum = temp2->val + head->val;
            maxsum = max(maxsum, sum);

            head = head->next;
            temp2 = temp2->next;
        }
        return maxsum;
    }
};