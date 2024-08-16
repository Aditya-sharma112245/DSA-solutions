class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* l=new ListNode(-10);
        ListNode*temp=head;
        ListNode* g=new ListNode(-1);
        ListNode* less=l;
        ListNode* greater=g;
        while(temp){
if(temp->val<x){
less->next=temp;
less=less->next;
}
else{
greater->next=temp;
greater=greater->next;
}
temp=temp->next;


        }
less->next=g->next;
greater->next = nullptr;
return l->next;
 delete l; 
    delete g;
    }
};