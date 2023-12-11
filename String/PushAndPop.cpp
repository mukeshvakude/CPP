#include <iostream>
#include <string>

int main() {
    std::string str("Hello");
    str.push_back('!');
    std::cout << str << std::endl;

    str.pop_back(); // Removes the last character '!'
    std::cout << str << std::endl;
    return 0;
}

