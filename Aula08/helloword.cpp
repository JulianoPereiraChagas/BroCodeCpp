#include <iostream>

int main() {

// cout (insert operator)

// cin (extraction operator)

std::string name;
int age;

std::cout << "What's your name? " << '\n';
std::cin >> name;

std::cout << "Hello, " << name << "!" << '\n';

std::cout << "How old are you? " << '\n';
std::cin >> age;

std::cout << "You are " << age << " years old." << '\n';

    return 0;
}