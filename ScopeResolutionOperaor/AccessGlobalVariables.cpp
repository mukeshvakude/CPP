#include <iostream>
using namespace std;

int globalVar = 42; // A global variable

class AccessGlobalVariables {
public:
    int classVar = 10; // A variable within the class

    void displayGlobalVar() {
        // Accessing the global variable from within the class
        cout << "Global Variable: " << ::globalVar << endl;
    }

    void displayClassVar() {
        // Accessing the class variable
        cout << "Class Variable: " << classVar << endl;
    }
};

int main() {
    AccessGlobalVariables obj;

    obj.displayGlobalVar(); // Access the global variable using :: within the class
    obj.displayClassVar(); // Access the class variable

    return 0;
}

