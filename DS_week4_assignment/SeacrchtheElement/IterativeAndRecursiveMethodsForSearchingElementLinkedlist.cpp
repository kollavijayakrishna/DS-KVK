#include <iostream> // Including the header for input/output operations

// Defining the Node structure for elements in a linked list
struct Node {
  int data;     // Holds the data value of the node
  Node* next;   // Pointer to the next node in the list
};

// Function for iterative search using a loop
bool iterativeSearch(Node* head, int target) {
  Node* current = head; // Starting from the head of the list
  while (current != nullptr) { // Looping until reaching the end (null)
    if (current->data == target) { // Checking if the current node's data matches the target
      return true;  // Found! Returning true
    }
    current = current->next; // Moving to the next node
  }
  return false; // Not found in the list, returning false
}

// Function for recursive search using function calls
bool recursiveSearch(Node* head, int target) {
  if (head == nullptr) { // Base case: empty list, target not found
    return false;
  }
  if (head->data == target) { // Base case: current node's data matches target
    return true;  // Found! Returning true
  }
  return recursiveSearch(head->next, target); // Recursive call to search the rest of the list
}

int main() {
  // Creating a sample linked list (replace with your data)
  Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};
  int target = 3; // Element to search for

  // Performing iterative search and printing the result
  if (iterativeSearch(head, target)) {
    std::cout << "Element found using iterative search!" << std::endl;
  } else {
    std::cout << "Element not found using iterative search." << std::endl;
  }

  // Performing recursive search and printing the result
  if (recursiveSearch(head, target)) {
    std::cout << "Element found using recursive search!" << std::endl;
  } else {
    std::cout << "Element not found using recursive search." << std::endl;
  }

  // Memory deallocation (important!)
  Node* current = head;
  while (current != nullptr) {
    Node* next = current->next;
    delete current;
    current = next;
  }

  return 0;
}
