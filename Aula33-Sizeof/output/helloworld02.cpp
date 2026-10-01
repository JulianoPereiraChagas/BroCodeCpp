#include <iostream>

int main() {

    std::string name = "Bro";
    double gpa = 2.5;

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    char grade = 'A';
    bool student = true;

    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    return 0;
}