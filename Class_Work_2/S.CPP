#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Creating an integer stack named 'numberStack'
    stack<int> numberStack;

    // Pushing values into the stack
    numberStack.push(21); // Adding 21 to the stack
    numberStack.push(22); // Adding 22 to the stack
    numberStack.push(24); // Adding 24 to the stack
    numberStack.push(25); // Adding 25 to the stack

    int num = 0;
    numberStack.push(num); // Adding the value of 'num' (which is 0) to the stack
    numberStack.pop();     // Removing the top element from the stack (0)
    numberStack.pop();     // Removing the top element from the stack (25)
    numberStack.pop();     // Removing the top element from the stack (24)

    // Printing the remaining elements in the stack
    while (!numberStack.empty()) {
        cout << numberStack.top() << " "; // Outputting the top element of the stack
        numberStack.pop();                 // Removing the top element from the stack
    }

    return 0; // Indicating successful completion of the program
}
