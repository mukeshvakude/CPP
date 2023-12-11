#include <iostream>
using namespace std;
int main() {
    // Declare an integer array and initialize it
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Print the elements of the array
    for (int i = 0; i < arraySize; ++i) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    return 0;
}

