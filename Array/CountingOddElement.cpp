#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int oddCount = 0;

    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] % 2 != 0) {
            oddCount++;
        }
    }

    std::cout << "Number of odd elements in the array: " << oddCount << std::endl;

    return 0;
}

