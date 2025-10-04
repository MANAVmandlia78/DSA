
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
        ListNode* deleteMiddle(ListNode* head) {
              if (!head || !head->next) return nullptr; // Handle single-node case
             ListNode* first = head;
             ListNode* Second = head; 
           while(first != nullptr && first->next != nullptr && first->next->next != nullptr){
            first = first->next->next;
            if (first == nullptr || first->next == nullptr) break; // Ensure we stop correctly
                Second = Second->next;
           }
           Second->next = Second->next->next;
           return head;
    
        }
    };
