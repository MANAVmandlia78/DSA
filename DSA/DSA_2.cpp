struct Node {
    int data;
    struct Node * next;
    Node(int x) {
      data = x;
      next = nullptr;
    }
  }; 
  
  class Solution {
    public:
      Node *insertAtEnd(Node *head, int x) {
          if(head == nullptr ){
              return new Node(x);
          }
          Node* temp = head;
          while(temp->next!=nullptr){
              temp = temp->next;
          }
          temp->next = new Node(x);
          
          return head;
      }
  };
