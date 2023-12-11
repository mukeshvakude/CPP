#include <iostream>
#include <string>

int main() {
    std::string str("Hello, World!");
    str.replace(7, 6, "Universe"); // Replaces "World!" with "Universe"
    std::cout << str << std::endl;
    return 0;
}

