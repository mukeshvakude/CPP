#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str = "Hello, World!";
    
    // Use std::reverse to reverse the string
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}

