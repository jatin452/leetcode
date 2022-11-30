class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    if(head==NULL)
    return head;
    ListNode* newNext=removeElements(head->next,val);
        if(head->val==val){
            return newNext;
        }else{
            head->next=newNext;
            return head;
        }
    }
};
