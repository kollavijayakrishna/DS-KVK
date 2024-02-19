#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int data) : data(data), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

class DynamicArray {
private:
    vector<int> array;

public:
    void insert(int data) {
        array.push_back(data);
    }

    void display() {
        for (int i = 0; i < array.size(); ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

class Stack {
private:
    stack<int> st;

public:
    void push(int data) {
        st.push(data);
    }

    int pop() {
        int top = st.top();
        st.pop();
        return top;
    }

    void display() {
        stack<int> temp = st;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

class Queue {
private:
    queue<int> q;

public:
    void enqueue(int data) {
        q.push(data);
    }

    int dequeue() {
        int front = q.front();
        q.pop();
        return front;
    }

    void display() {
        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() : root(nullptr) {}

    void insert(int data) {
        if (!root) {
            root = new TreeNode(data);
        } else {
            _insertRecursive(root, data);
        }
    }

    void display() {
        _displayRecursive(root);
        cout << endl;
    }

private:
    void _insertRecursive(TreeNode* current, int data) {
        if (data < current->data) {
            if (!current->left) {
                current->left = new TreeNode(data);
            } else {
                _insertRecursive(current->left, data);
            }
        } else if (data > current->data) {
            if (!current->right) {
                current->right = new TreeNode(data);
            } else {
                _insertRecursive(current->right, data);
            }
        }
    }

    void _displayRecursive(TreeNode* current) {
        if (current) {
            _displayRecursive(current->left);
            cout << current->data << " ";
            _displayRecursive(current->right);
        }
    }
};

int main() {
    int choice;
    cout << "Welcome to the Dynamic Data Structure Application!" << endl;

    while (true) {
        cout << "\nSelect a data structure:" << endl;
        cout << "1. List\n2. Linked List\n3. Array\n4. Stack\n5. Queue\n6. Binary Tree\n7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int size;
            cout << "Enter the size of the list: ";
            cin >> size;
            cout << "Enter elements: ";
            vector<int> data(size);
            for (int i = 0; i < size; ++i) {
                cin >> data[i];
            }
            cout << "List: ";
            for (int i = 0; i < size; ++i) {
                cout << data[i] << " ";
            }
            cout << endl;
        } else if (choice == 2) {
            LinkedList linkedList;
            int size;
            cout << "Enter the number of elements in the linked list: ";
            cin >> size;
            cout << "Enter elements: ";
            for (int i = 0; i < size; ++i) {
                int data;
                cin >> data;
                linkedList.insert(data);
            }
            cout << "Linked List: ";
            linkedList.display();
        } else if (choice == 3) {
            DynamicArray dynamicArray;
            int size;
            cout << "Enter the size of the array: ";
            cin >> size;
            cout << "Enter elements: ";
            for (int i = 0; i < size; ++i) {
                int data;
                cin >> data;
                dynamicArray.insert(data);
            }
            cout << "Array: ";
            dynamicArray.display();
        } else if (choice == 4) {
            Stack stack;
            int size;
            cout << "Enter the number of elements in the stack: ";
            cin >> size;
            cout << "Enter elements: ";
            for (int i = 0; i < size; ++i) {
                int data;
                cin >> data;
                stack.push(data);
            }
            cout << "Stack: ";
            stack.display();
        } else if (choice == 5) {
            Queue queue;
            int size;
            cout << "Enter the number of elements in the queue: ";
            cin >> size;
            cout << "Enter elements: ";
            for (int i = 0; i < size; ++i) {
                int data;
                cin >> data;
                queue.enqueue(data);
            }
            cout << "Queue: ";
            queue.display();
        } else if (choice == 6) {
            BinaryTree binaryTree;
            int size;
            cout << "Enter the number of elements in the binary tree: ";
            cin >> size;
            cout << "Enter elements: ";
            for (int i = 0; i < size; ++i) {
                int data;
                cin >> data;
                binaryTree.insert(data);
            }
            cout << "Binary Tree: ";
            binaryTree.display();
        } else if (choice == 7) {
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}