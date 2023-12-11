#include <iostream>

int main() {
    int numbers[] = {2, 3, 2, 5, 8, 3, 1, 7, 8};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Create a new array to store unique elements
    int unique[arraySize];
    int uniqueSize = 0;

    for (int i = 0; i < arraySize; ++i) {
        bool isDuplicate = false;

        // Check if the current element is a duplicate
        for (int j = 0; j < uniqueSize; ++j) {
            if (numbers[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, add it to the unique array
        if (!isDuplicate) {
            unique[uniqueSize] = numbers[i];
            uniqueSize++;
        }
    }

    // Print the array with duplicates removed
    std::cout << "Array with duplicates removed: ";
    for (int i = 0; i < uniqueSize; ++i) {
        std::cout << unique[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

