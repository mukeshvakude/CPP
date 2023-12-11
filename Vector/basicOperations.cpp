#include<iostream>
#include<vector>

using namespace std;

template<typename T>
void printVector(vector<T> myVector) {
    for ( T element : myVector) {
        cout << element << " ";
    }
    cout << endl;
}
int main(){

    vector<int> intVector;
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);

    // Using the template function to print the vector
    printVector(intVector);

    // You can also use the template function with other types
    vector<double> doubleVector;
    doubleVector.push_back(1.1);
    doubleVector.push_back(2.2);
    doubleVector.push_back(3.3);

    // Using the template function to print the vector
    printVector(doubleVector);

    return 0;
}
