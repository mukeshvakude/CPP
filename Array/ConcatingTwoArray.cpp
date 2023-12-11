#include <iostream>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arraySize1 = sizeof(arr1) / sizeof(arr1[0]);
    int arraySize2 = sizeof(arr2) / sizeof(arr2[0];
    int concatenated[arraySize1 + arraySize2];

    for (int i = 0; i < arraySize1; ++i) {
        concatenated[i] = arr1[i];
    }

    for (int i = 0; i < arraySize2; ++i) {
        concatenated[arraySize1 + i] = arr2[i];
    }

    // Print the concatenated array
    std::cout << "Concatenated array: ";
    for (int i = 0; i < arraySize1 + arraySize2; ++i) {
        std::cout << concatenated[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

