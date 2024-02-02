#include <iostream>
using namespace std;

// Function to perform optimized Bubble Sort on an array
void optimizedBubbleSort(int array[], int size) {
    bool swapped;  // Flag to track if any swaps were made

    // Outer loop: Iterate through each element of the array
    for (int i = 0; i < size - 1; i++) {
        swapped = false;  // Initialize the flag for each pass

        // Inner loop: Compare and swap elements to bubble up the largest element to its correct position
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements and swap if they're in the wrong order
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);  // Swap elements
                swapped = true;  // Set the flag to true
            }
        }

        // If no swaps were made in a pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int newArray[] = {3,5,6,4,21,35,78,96,75,32};
    int newArraySize = sizeof(newArray) / sizeof(newArray[0]);

    // Display the unsorted array
    cout << "Partially sorted array: ";
    for (int i = 0; i < newArraySize; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    // Perform optimized Bubble Sort
    optimizedBubbleSort(newArray, newArraySize);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < newArraySize; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    return 0;
}
