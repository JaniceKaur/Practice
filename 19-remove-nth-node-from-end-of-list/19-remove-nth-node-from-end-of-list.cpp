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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* preptr=head;
        ListNode* ptr=head;
        if(head->next==NULL){
            head=NULL;
            return head;
        }
            
        for(int i=0;i<n;i++){
            if(ptr->next==NULL){
                return head->next;
                break;
            }
            ptr=ptr->next;
        }
        while(ptr->next!=NULL){
            ptr=ptr->next;
            preptr=preptr->next;
        }
        ListNode* temp=preptr->next;
        preptr->next=preptr->next->next;
        delete(temp);
        return head; 
    }
    
};