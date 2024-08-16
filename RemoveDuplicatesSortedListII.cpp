class Solution {
public:
   ListNode* deleteDuplicates(ListNode* head) {
    if (!head) return NULL;


    std::unordered_map<int, int> count;
    ListNode* temp = head;
    while (temp) {
        count[temp->val]++;
        temp = temp->next;
    }

   
    ListNode* dummy = new ListNode(-1); 
    ListNode* ptr = dummy;
    temp = head;

    while (temp) {
        if (count[temp->val] == 1) {
            ptr->next = new ListNode(temp->val);
            ptr = ptr->next;
        }
        temp = temp->next;
    }

   
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
};