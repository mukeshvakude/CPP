#include <iostream>
using namespace  std;
int main() {
    char myChar = 'A'; //alphabets or Numbers

    if (isalnum(myChar)) {
        cout << myChar << " is alphanumeric.";
    } else {
        cout << myChar << " is not alphanumeric." ;
    }

    return 0;
}

