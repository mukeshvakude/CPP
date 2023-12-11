#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 2, 4, 2, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int target = 2;
    int count = 0;

    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] == target) {
            count++;
        }
    }

    std::cout << "Number of occurrences of " << target << ": " << count << std::endl;

    return 0;
}

