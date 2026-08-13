#include <iostream>

int main() {

    char grade;

    std::cout << "Enter your grade (A, B, C, D, F): ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "Excellent!";
            break;
        case 'B':
            std::cout << "Good job!";
            break;
        case 'C':
            std::cout << "You can do better!";
            break;
        case 'D':
            std::cout << "You need to work harder!";
            break;
        case 'F':
            std::cout << "You failed!";
            break;
        default:
            std::cout << "Invalid grade entered. Please enter a valid grade (A, B, C, D, F).";
            break;
    }

    return 0;
}
