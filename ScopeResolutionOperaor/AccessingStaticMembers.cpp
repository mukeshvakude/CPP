#include <iostream>
using namespace std;

class AccessingStaticMembers {
public:
    static int staticVar; // A static class variable

    static void printStaticVar() {
        cout << "Static Variable: " << staticVar << endl;
    }
};

int AccessingStaticMembers::staticVar = 20; // Define and initialize the static variable

int main() {
    AccessingStaticMembers::printStaticVar(); // Access static function using scope resolution
    AccessingStaticMembers::staticVar+= 1 ; // Increament static varibles by 1
    cout << "Accessing Static Variable: " << AccessingStaticMembers::staticVar << endl;
    return 0;
}

