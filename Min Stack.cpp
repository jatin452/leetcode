class Node{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
class MinStack {
    Node *Top = NULL, *head = NULL;
public:
    MinStack() {
    }
    
    void push(int val) {
        Node* n = new Node(val);
        if(head == NULL && Top == NULL)
        {
            head = n;
            Top = n;
            return;
        }
        Top->next = n;
        Top = n;
    }
    
    void pop() {
        Node *temp = head;
        if(temp == Top)
        {
            head = NULL;
            delete Top;
            Top = NULL;
            return;
        }
        while(temp ->next != Top)
        {
            temp = temp->next;
        }
        delete Top;
        temp->next = NULL;
        Top = temp;
    }
    
    int top() {
        return Top->val;
    }
    
    int getMin() {
        Node* temp = head;
        int mi = INT_MAX;
        while(temp)
        {
            mi = min(mi,temp->val);
            temp = temp->next;
        }
        return mi;
    }
};
