 Node* merge(Node* ptr1,Node* ptr2){
       Node* dummy=new Node(-1);
       Node* ptr3=dummy;
       while(ptr1&&ptr2){
           if(ptr1->data>ptr2->data){
               ptr3->bottom=ptr2;
               ptr2=ptr2->bottom;
           }
           else{
               ptr3->bottom=ptr1;
               ptr1=ptr1->bottom;
           }
           ptr3=ptr3->bottom;
       }
       if(ptr1)ptr3->bottom=ptr1;
       if(ptr2)ptr3->bottom=ptr2;
       return dummy->bottom;
       
   }
   
    Node *flatten(Node *root) {
       if(root==NULL||root->next==NULL)return root; 
       
       Node* newhead=flatten(root->next);
       return merge(root,newhead);
       
    }