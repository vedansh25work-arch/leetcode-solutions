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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>ans;
        ListNode* temp = head;
        while(temp){
            ans.push_back(temp->val);
            temp = temp->next;

        }
        swap(ans[k-1],ans[ans.size()-k]);
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        for( int i =0;i<ans.size();i++){
            dummy->next=new ListNode(ans[i]);
            dummy = dummy->next;
        }
        return tail->next;
    }
};