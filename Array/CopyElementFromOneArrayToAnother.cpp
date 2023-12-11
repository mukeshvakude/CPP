#include <iostream>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    for (int i = 0; i < 5; ++i) {
        destination[i] = source[i];
    }

    // Print the elements in the destination array
    for (int i = 0; i < 5; ++i) {
        std::cout << "Destination[" << i << "]: " << destination[i] << std::endl;
    }

    return 0;
}

