#include <iostream>

int main() {

    std::string car[] = {"Corvette", "Mustang", "Camry"};

car[0] = "Corvette";
car[1] = "Mustang";
car[2] = "Camry";

    std::cout << car[0] << " " << car[1] << " " << car[2];

    return 0;
}