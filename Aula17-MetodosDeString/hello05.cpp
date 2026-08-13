#include <iostream>
#include <string>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (!name.empty()) {
        std::cout << "First letter: " << name.at(0) << '\n';
    } else {
        std::cout << "You didn't enter a name." << '\n';
    }

    return 0;
}