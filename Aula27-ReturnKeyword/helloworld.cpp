#include <iostream>

double square(double lenght);
double cube(double lenght);

int main() {

    double lenght = 5.0;
    double area = square(lenght);
    double volume = cube(lenght);

    std::cout << "Area: " << area << "cm²" << std::endl;
    std::cout << "Volume: " << volume << "cm³" << std::endl;

    return 0;
}

double square(double lenght){
    return lenght * lenght;
}
double cube(double lenght){
    return lenght * lenght * lenght;
}