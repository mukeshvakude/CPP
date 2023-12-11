#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int target = 3;
    bool found = false;

    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Element " << target << " found in the array." << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}

