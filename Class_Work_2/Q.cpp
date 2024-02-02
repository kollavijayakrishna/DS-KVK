// C++ code demonstrating the use of a Queue in the Standard Template Library (STL)

#include <iostream>
#include <queue>

using namespace std;

// Function to print the elements of the queue (classwork)
void showQueue(queue<int> q)
{
    queue<int> tempQueue = q;
    while (!tempQueue.empty()) {
        cout << '\t' << tempQueue.front();
        tempQueue.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    // Creating a queue named gquiz
    queue<int> gquiz;

    // Pushing elements into the queue
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Displaying the elements in the queue
    cout << "The queue gquiz is : ";
    showQueue(gquiz);

    // Displaying the size, front, and back of the queue
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    // Popping an element and displaying the updated queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showQueue(gquiz);

    return 0;
}
