#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    bool isSorted = true;

    for (int i = 0; i < arraySize - 1; ++i) {
        if (numbers[i] > numbers[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        std::cout << "The array is sorted in ascending order." << std::endl;
    } else {
        std::cout << "The array is not sorted." << std::endl;
    }

    return 0;
}

