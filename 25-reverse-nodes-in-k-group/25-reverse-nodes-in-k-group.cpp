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
    void reverse(ListNode* head,ListNode* end){
        ListNode*p=NULL;
        ListNode*c =head;
        ListNode*n=head->next;
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
        ListNode *s=head,*e=head;
        for(int i=0;i<k-1;i++){
            e=e->next;
            if(e==NULL)
                return s;
        }
        ListNode* next_head=reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=next_head;
        return e;
    }
};