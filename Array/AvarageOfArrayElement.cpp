#include <iostream>

int main() {
    int numbers[] = {12, 5, 8, 15, 10};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    double sum = 0;

    for (int i = 0; i < arraySize; ++i) {
        sum += numbers[i];
    }

    double average = sum / arraySize;

    std::cout << "Average of array elements: " << average << std::endl;

    return 0;
}

