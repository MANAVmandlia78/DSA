//Code for finding middle node in a linked list//
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
        ListNode* middleNode(ListNode* head) {
           ListNode* first = head;
           ListNode* Second = head; 
           int count1=0,count2=0;
           while(first!=nullptr){
            first = first->next;
            count1++;
           }
           while(count2<(count1/2)){
            Second = Second->next;
            count2++;
           }
        return Second;}
    };