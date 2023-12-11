#include <iostream>
using namespace std;

int main() {
    int numbers[] = {12, 5, 27, 9, 18};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    int max = numbers[0];

    for (int i = 1; i < arraySize; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "Largest element in the array: " << max << endl;

    return 0;
}

