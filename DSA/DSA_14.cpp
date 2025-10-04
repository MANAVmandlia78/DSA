// code for Remove Nth Node From End of List
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
           ListNode* temp = head;
           int count = 0;
           while(temp!=nullptr){
            temp=temp->next;
            count++;
           } 
    
           if (count == n) {
                return head->next;
            }
            
           int limit = count - n;
           count = 1;
           temp = head;
    
           while(count<limit){
            temp=temp->next;
            count++;
           } 
           temp->next=temp->next->next;
           return head;
        }
    };
