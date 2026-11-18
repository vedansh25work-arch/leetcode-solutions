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
ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        ListNode* prevnode = NULL;
        ListNode* nextnode= NULL;
        ListNode * lastnode =NULL;  
        ListNode * firstnode =NULL;   
        int n =1; 
        while(temp){
            if(n==left){
                firstnode = temp;

            }
            if(n==left-1){
                prevnode= temp;
            }
            if(n==right){
                lastnode = temp;
                nextnode= temp->next;
                temp->next = NULL;
                break;
            }
            n++;
            temp = temp->next;
        }
           
       ListNode* newhead= reverse(firstnode);
       if(prevnode!=NULL)
        prevnode->next = newhead;
        else head= newhead;
        firstnode -> next = nextnode ;
return head;
    }
};