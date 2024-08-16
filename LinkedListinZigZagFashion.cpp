class Solution {
  public:
    Node* zigZag(Node* head) {
       int count=0;
       Node* temp=head;
       while(temp&&temp->next){
           if(count%2==0){
             if(temp->data>temp->next->data){
                 swap(temp->data,temp->next->data);
                 
             }
               
               temp=temp->next;
           }
           else{
                if(temp->data<temp->next->data){
                 swap(temp->data,temp->next->data);
                 
             }
               
               temp=temp->next;
               
               
           }
           count++;
       }
       
       return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t, k;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string input;
        getline(cin, input); 

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;
        }

        while (ss >> x) {
            tail->next = new Node(x);
            tail = tail->next;
        }

        Solution ob;
        Node *ans = ob.zigZag(head);
        if (checkZigZag(ans)) {
            cout << "true";
        } else {
            cout << "false";
        }
        // print(ans);
        cout << endl;
    }
    return 0;
}

// } 