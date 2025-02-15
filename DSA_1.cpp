class Node {
    public:
        int data;
        Node* next;
    
        // Default constructor
        Node()
        {
            data = 0;
            next = NULL;
        }
    
        // Parameterised Constructor
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

class Solution {
    public:
        void deleteNode(ListNode* node) {
             if (node == nullptr || node->next == nullptr) return;
            node->val = node->next->data;
            ListNode *temp = node->next;
            node->next=node->next->next;
            delete temp;
        return head;
    };