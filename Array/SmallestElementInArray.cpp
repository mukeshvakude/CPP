#include <iostream>

int main() {
    int numbers[] = {12, 5, 27, 9, 18};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int min = numbers[0];

    for (int i = 1; i < arraySize; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    std::cout << "Smallest element in the array: " << min << std::endl;

    return 0;
}

