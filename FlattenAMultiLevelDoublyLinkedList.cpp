class Solution {
public:
   Node* flatten(Node* head) {
   
    if (!head) return nullptr;

    Node* curr = head;
    while (curr) {
        if (curr->child) {
          
            Node* newhead = flatten(curr->child);

            
            Node* childtail = newhead;
            while (childtail->next) {
                childtail = childtail->next;
            }

            
            Node* nextwala = curr->next;

            
            curr->next = newhead;
            newhead->prev = curr;
            childtail->next = nextwala;

           
              
                 if (nextwala) {
                nextwala->prev = childtail;
            }
            
            

            
            curr->child = nullptr;
        }

       
        curr = curr->next;
    }

    return head;
}

};