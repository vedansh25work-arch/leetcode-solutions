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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        for (int i = 0; i < n; i++) {
          ListNode * temp = lists[i];
            while (temp) {
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        while(!pq.empty()){
            tail->next = new ListNode (pq.top());
            pq.pop();
            tail=tail->next;
        }
        return dummy->next;
    }
};