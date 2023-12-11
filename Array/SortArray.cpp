#include <iostream>
#include <algorithm>

int main() {
    int numbers[] = {5, 2, 8, 1, 7};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Sort the array in ascending order
    std::sort(numbers, numbers + arraySize);

    // Print the sorted array
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Sorted[" << i << "]: " << numbers[i] << std::endl;
    }

    return 0;
}

