#include <iostream>

int main() {
    int numbers[] = {12, 5, 27, 9, 18};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int max = numbers[0];
    int secondMax = -1;

    for (int i = 1; i < arraySize; ++i) {
        if (numbers[i] > max) {
            secondMax = max;
            max = numbers[i];
        } else if (numbers[i] > secondMax && numbers[i] < max) {
            secondMax = numbers[i];
        }
    }

    std::cout << "Second largest element in the array: " << secondMax << std::endl;

    return 0;
}

