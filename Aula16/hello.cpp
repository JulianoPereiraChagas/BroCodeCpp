#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "******* Temperature conversion *********";
    std::cout << "F = Fahrenheit";
    std::cout << "C = Celcius";
    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f' ){
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;

        std::cout << "Temperature is: " << temp << "F/n";
    }

    std::cout<< "*******************************************";

    return 0;
}