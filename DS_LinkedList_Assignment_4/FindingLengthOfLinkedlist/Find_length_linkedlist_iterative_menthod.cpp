#include <iostream> // Include the header for input/output operations

// Define the Node structure for elements in a linked list
struct Node {
    int data;     // Holds the data value of the node
    Node* next;   // Pointer to the next node in the list
};

// Function to find the length of a linked list iteratively
int iterativeLength(Node* head) {
    int length = 0; // Initialize a counter variable for length
    Node* current = head; // Start traversing from the head of the list

    // Loop until we reach the end (null)
    while (current != nullptr) {
        length++; // Increment the counter for each visited node
        current = current->next; // Move to the next node in the list
    }

    return length; // Return the total length of the list
}

int main() {
    // Create a sample linked list (replace with your data)
    Node* head = new Node{ 1, new Node{2, new Node{3, new Node{4, nullptr}}} };

    // Find the length of the list
    int listLength = iterativeLength(head);
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

/*
Explanation:

#include <iostream>: This line includes the header file for input/output operations, enabling the use of std::cout.
Node structure: Defines a Node structure containing data and next pointers.
iterativeLength function:
Initialization:
int length = 0;: Initializes a counter variable, length, to 0, indicating no nodes counted yet.
Node* current = head;: Sets a pointer, current, to the head of the list, preparing to traverse the list.
Loop:
while (current != nullptr): This loop iterates as long as current is not null, indicating there are more nodes to visit.
length++;: Increments the length counter for each visited node.
current = current->next;: Advances the current pointer to the next node in the list.
Return:
return length;: After the loop ends (reaching the end of the list), returns the total count of nodes, stored in the length variable.
main function:
Sample linked list:
Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};: Creates a sample linked list with nodes containing values 1, 2, 3, and 4.
Calculate length:
int listLength = iterativeLength(head);: Calls the iterativeLength function with the head pointer to calculate the length and stores it in listLength.
std::cout << "Length of the list: " << listLength << std::endl;: Prints the length of the list to the console.
Memory deallocation:
Node* current = head;: Sets current back to the head to start deallocating memory.
while (current != nullptr): Initiates a loop to deallocate memory for each node.
Node* next = current->next;: Stores the address of the next node before deleting the current one.
delete current;: Deallocates the memory of the current node.
current = next;: Advances current to the next node (previously stored in next) to repeat the deallocation process.
Return:
return 0;: Indicates successful program execution.
*/
