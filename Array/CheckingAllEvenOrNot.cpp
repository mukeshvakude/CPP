#include <iostream>

int main() {
    int numbers[] = {2, 4, 6, 8, 10};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    bool allEven = true;

    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] % 2 != 0) {
            allEven = false;
            break;
        }
    }

    if (allEven) {
        std::cout << "All elements are even." << std::endl;
    } else {
        std::cout << "Not all elements are even." << std::endl;
    }

    return 0;
}

