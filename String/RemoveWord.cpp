#include <iostream>
#include <string>

int main() {
    std::string str("Hello, World!");
    str.erase(7, 6); // Removes "World!"
    std::cout << str << std::endl;
    return 0;
}

