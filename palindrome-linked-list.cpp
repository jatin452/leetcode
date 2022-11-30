class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string str="";
        while(head!=NULL){
            str+=to_string(head->val);
            head=head->next;
        }
        string str1=str;
        reverse(str.begin(),str.end());
        if(str==str1)
            return true;
        else
            return false;
        
    }
};
