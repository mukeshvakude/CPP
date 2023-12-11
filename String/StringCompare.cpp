#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "hello";
    string str2 = "deep";

    int result = str1.compare(str2);

    if (result == 0) {
        cout << "Strings are equal." << endl;
    } else if (result < 0) {
        cout << "str1 comes before str2." << endl;
    } else {
        cout << "str1 comes after str2." << endl;
    }

    return 0;
}

