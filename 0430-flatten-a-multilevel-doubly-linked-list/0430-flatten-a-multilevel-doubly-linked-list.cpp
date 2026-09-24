/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:

    Node* flatten(Node* head) {
        if (head == nullptr)
            return nullptr;

        flattenHelper(head);

        return head;
    }

    Node* flattenHelper(Node* head) {

        Node* curr = head;
        Node* tail = nullptr;

        while (curr != nullptr) {

            Node* next = curr->next;

            // Current node has a child
            if (curr->child != nullptr) {

                Node* child = curr->child;

                // Recursively flatten child
                Node* childTail = flattenHelper(child);

                // curr -> child
                curr->next = child;
                child->prev = curr;

                // childTail -> next
                if (next != nullptr) {
                    childTail->next = next;
                    next->prev = childTail;
                }

                // Remove child pointer
                curr->child = nullptr;

                tail = childTail;
            }
            else {
                tail = curr;
            }

            curr = next;
        }

        return tail;
    }
};