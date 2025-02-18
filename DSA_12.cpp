
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
        bool isPalindrome(ListNode* head) {
            if (!head || !head->next) return true; // Edge case: empty or single node
    
            ListNode* slow = head;
            ListNode* fast = head;
    
            // Find the middle of the linked list
            while (fast && fast->next) {
                slow = slow->next;
                fast = fast->next->next;
            }
    
            // Reverse the second half of the linked list
            ListNode* prev = nullptr;
            ListNode* temp = slow;
            ListNode* front;
            while (temp != nullptr) {
                front = temp->next;
                temp->next = prev;
                prev = temp;
                temp = front;
            }
    
            ListNode* Newhead = prev; // Head of the reversed second half
            ListNode* start = head; // Pointer to start of first half
    
            // Compare the first half with the reversed second half
            while (Newhead != nullptr) {
                if (start->val != Newhead->val) {
                    return false;
                }
                start = start->next;
                Newhead = Newhead->next;
            }
    
            return true;
        }
    };
    