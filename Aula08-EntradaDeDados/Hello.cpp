#include <iostream>
#include <string>

int main() {

    // cout (insertion operator)
    // cin (extraction operator)

    std::string name;
    int age;

    std::cout << "What's your full name? ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << '\n';

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}