struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
     int countNodesinLoop(Node *head) {
        if (!head || !head->next) return 0; // No cycle possible

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect if there is a cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) { // Cycle detected
                // Step 2: Count the nodes in the loop
                int count = 1;
                slow = slow->next;
                while (slow != fast) { // Continue moving slow until it meets fast again
                    slow = slow->next;
                    count++;
                }
                return count;
            }
        }
        return 0;
    }
};
