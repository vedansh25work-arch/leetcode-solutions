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
    ListNode* findnnode(ListNode* head, int k) {
        int cnt = 1;
        ListNode* temp = head;
        while (temp) {
             if (cnt == k)
                return temp;
            cnt++;
            temp = temp->next;
           
        }
        return NULL;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
         if (head == NULL || head->next == NULL || k == 0)
            return head;
        int len = 1;
        while (temp->next) {
              len++;
            temp = temp->next;
          
        }
        if (k%len == 0)
            return head;

        k = k % len;
        temp->next = head;

        ListNode *lastNode = findnnode(head, len - k);
        head = lastNode->next;
        lastNode->next = NULL;
        return head;
    }
};