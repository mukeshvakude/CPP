#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);

    // Display the front element of the queue
    cout << "Front element of the queue: " << myQueue.front() << "\n";

    // Display the size of the queue
    cout << "Size of the queue: " << myQueue.size() << "\n";

    // Dequeue elements from the queue
    while (!myQueue.empty()) {
        cout << "Dequeued: " << myQueue.front() << "\n";
        myQueue.pop();
    }

    // Check if the queue is empty
    if (myQueue.empty()) {
        cout << "The queue is empty.\n";
    } else {
        cout << "The queue is not empty.\n";
    }

    return 0;
}

