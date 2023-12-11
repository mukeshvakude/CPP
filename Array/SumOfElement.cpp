#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;

    for (int i = 0; i < arraySize; ++i) {
        sum += numbers[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}

