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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>mp;
        
        ListNode*temp = new ListNode(0);
        temp->next=head;
int prefixsum=0;
        ListNode* dummy =temp;
        while(dummy){
            prefixsum+=dummy->val;
            mp[prefixsum]= dummy;
            dummy = dummy->next;
        }
        prefixsum=0;
        dummy= temp;
        while(dummy){
            prefixsum+=dummy->val;
            dummy->next=mp[prefixsum]->next;
            dummy= dummy->next;
        }

        return temp->next;
        
    }
};