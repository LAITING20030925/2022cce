class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;

        ListNode* one = head;
        ListNode* two = head->next;
        while(one!=nullptr && two!=nullptr){
            int temp = one->val;
            one->val = two->val;
            two->val = temp;

            if(one->next!=nullptr) one = one -> next -> next;
            else break;

            if(two->next!=nullptr) two = two -> next -> next;
            else break;
        }
        return head;

    }
};
