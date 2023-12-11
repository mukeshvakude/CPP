#include <iostream>
#include <string>

int main() {
    std::string str("Hello, !");
    str.insert(7, "World");
    std::cout << str << std::endl;
    return 0;
}

