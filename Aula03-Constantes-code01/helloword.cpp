#include <iostream>

int main() {
    // const keyword makes a variable immutable - its value cannot be changed after initialization
    // const is used to protect variables from accidental modification and improve code safety
    // Example: const int maxValue = 100; // maxValue cannot be modified

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";


}
