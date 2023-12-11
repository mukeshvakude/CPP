#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Reverse the array
    for (int i = 0; i < arraySize / 2; ++i) {
        int temp = numbers[i];
        numbers[i] = numbers[arraySize - 1 - i];
        numbers[arraySize - 1 - i] = temp;
    }

    // Print the reversed array
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Reversed[" << i << "]: " << numbers[i] << std::endl;
    }

    return 0;
}

