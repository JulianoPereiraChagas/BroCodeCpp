#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "You are a minor";
    } else { 
        std::cout << "You're an adult";
    }

    return 0;
}
