class Solution {
public:
ListNode* mid(ListNode* head){
    if (!head) return NULL;
ListNode* slow=head;
ListNode* fast=head;
while(fast->next&&fast->next->next){
slow=slow->next;
fast=fast->next->next;

}

return slow;
}
ListNode* merge(ListNode* l1,ListNode* l2){
ListNode* ptr1=l1;
ListNode* ptr2=l2;
ListNode dummy(0); 
ListNode* ptr3 = &dummy; 

while(ptr1&&ptr2){
if(ptr1->val>=ptr2->val){
ptr3->next=ptr2;
ptr2=ptr2->next;

}
else{
ptr3->next=ptr1;
ptr1=ptr1->next;

}
ptr3=ptr3->next;

}
if(ptr1)ptr3->next=ptr1;
else if(ptr2)ptr3->next=ptr2;
return dummy.next;

}



    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
       ListNode* m=mid(head);
       ListNode* otherlisthead=m->next;
       m->next=NULL;
       ListNode* right=sortList(otherlisthead);
       ListNode* left=sortList(head);
ListNode* ans=merge(left,right);
return ans;
    }
};