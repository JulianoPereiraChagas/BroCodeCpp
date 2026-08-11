#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 0) {
        std::cout << "You weren't even born yet!";
    } else if (age < 18) {
        std::cout << "You are a minor";
    } else if (age >= 18 && age < 60) {
        std::cout << "You're an adult";
    } else {
        std::cout << "You're a too old! Take care of your health!";
    }

    return 0;
}
