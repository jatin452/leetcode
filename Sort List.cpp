class Solution {
public:
    ListNode* sortList(ListNode* head) 
    {
        ListNode *start = head;
        vector <int> result;
        
		// Push all the elements of the Linked List to a Vector
        while(start) 
        {
            result.push_back(start->val);
            start = start->next;
        }
        
		// Sort the Vector using the inbuilt function 
        sort(result.begin(), result.end());
        start = head;
        int i = 0;
        
		// Rewrite the data from first using the sorted vector values
        while(start)
        {
            start->val = result[i];
            start = start->next;
            i++;
        }
        
		// Voila! return the answer. 
        return head;
        
    }
};
