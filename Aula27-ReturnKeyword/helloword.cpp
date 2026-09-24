#include <iostream>

double square(double lenght);

int main() {

    double lenght = 5.0;
    double area = square(lenght);

    std::cout << "Area: " << area << std::endl;

    return 0;
}

double square(double lenght){
    double result = lenght * lenght;
}