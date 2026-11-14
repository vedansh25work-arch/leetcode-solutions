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
    ListNode* doubleIt(ListNode* head) {
         if (head->val >= 5) {
            head = new ListNode(0, head);
        }
        ListNode* temp = head;
        vector<int> ans;
        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int carry = 0;
        for (int i = ans.size() - 1; i >= 0; i--) {
            if (ans[i] * 2 > 9) {
                int sum = (ans[i] * 2) + carry; 
                ans[i] = sum % 10;              
                carry = sum / 10;
            } else
                {ans[i]= (ans[i]*2+carry);
                carry = ans[i]/10;}
        }
        ListNode* dummy = new ListNode(-1);
        ListNode * tail = dummy ;
        if(carry>0){
            dummy->next = new ListNode(carry);
            dummy= dummy->next;
        }
        for(int x:ans){
            dummy->next = new ListNode(x);
            dummy = dummy->next;
        }
        return tail->next;
    }
};