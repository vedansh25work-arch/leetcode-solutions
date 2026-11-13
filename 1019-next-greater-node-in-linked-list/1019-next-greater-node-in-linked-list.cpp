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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        
        ListNode* temp = head;
        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        stack<int> st;
        
        for( int i =ans.size()-1;i>=0;i--){
            int curr = ans[i];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(st.empty())ans[i]=0;
            else ans[i]= st.top();
            st.push(curr);

        }
        return ans;
    }
};