#include <iostream>
#include <string>

int main() {
    std::string str("Hello, World!");
    std::string sub = str.substr(0, 5); // Extracts "Hello"
    std::cout << sub << std::endl;
    return 0;
}

