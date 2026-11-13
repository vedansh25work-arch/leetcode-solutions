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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> ans;
        ListNode* temp = list1;
        while(temp){
            ans.push_back(temp->val);
            temp= temp->next;
        }
        temp = list2;
        while(temp){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* dummy = new ListNode(-1);
        temp = dummy;
        for( int i =0;i<ans.size();i++){
            temp->next= new ListNode(ans[i]);
            temp = temp->next;
        }
            
        return dummy->next;
    }
};