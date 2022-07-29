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

// O(1) Space Complexity soln.
// Iterative Solution
class Solution {
public:
    void reverse(ListNode* head,ListNode* end){
        ListNode*p=NULL;
        ListNode*c =head;
        while(p!=end){
            ListNode* temp=c->next;
            c->next=p;
            p=c;
           
            c=temp;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==1)
            return head;
        ListNode* temp=new ListNode(-1);
        temp->next=head;
        ListNode *e=head,*dummy=temp;
        int i=0;
        while(e!=NULL){
            i++;
            if(i%k==0){
                
                ListNode* s=dummy->next,*e_next=e->next;
                reverse(s,e);
                dummy->next=e;
                s->next=e_next;
                dummy=s;
                e=e_next;
                
            }
            else
            {
                e=e->next;
            }
            
        }
        return temp->next;
    }
};