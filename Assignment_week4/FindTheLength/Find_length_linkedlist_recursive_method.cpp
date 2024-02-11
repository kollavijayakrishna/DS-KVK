#include <iostream> // Include the header for input/output operations

// Define the Node structure for elements in a linked list
struct Node {
    int data;     // Holds the data value of the node
    Node* next;   // Pointer to the next node in the list
};

// Function to find the length of a linked list recursively
int recursiveLength(Node* head) {
    if (head == nullptr) { // Base case: empty list (null), length is 0
        return 0;
    }
    else {
        // Recursive call: find the length of the rest of the list + 1 for the current node
        return 1 + recursiveLength(head->next);
    }
}

int main() {
    // Create a sample linked list (replace with your data)
    Node* head = new Node{ 1, new Node{2, new Node{3, new Node{4, nullptr}}} };

    // Find the length of the list
    int listLength = recursiveLength(head);
    std::cout << "Length of the list: " << listLength << std::endl;

    // Memory deallocation (important!)
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}

/* Explanation:

#include <iostream>: Includes the header for input/output operations.
Node structure: Defines the Node structure with data and next members.
recursiveLength function:
if (head == nullptr): Base case: if the current node is null (end of list), its length is 0, so return 0.
else: Recursive case:
return 1 + recursiveLength(head->next): Make a recursive call to find the length of the rest of the list (starting from the next node) and add 1 to it as we also count the current node.
main function:
Sample linked list: Creates a sample list with nodes containing values 1, 2, 3, and 4.
Calculate length: Calls the recursiveLength function with the head pointer to find the length and stores it in listLength.
Print length: Prints the length to the console.
Memory deallocation: Frees memory used by the linked list to avoid leaks, similar to the iterative approach.
*/
