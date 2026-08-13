#include <iostream>

int main() {

    int temp;
    bool sunny = false;

std::cout << "Enter temperature: ";
std::cin >> temp;

/*if(temp > 0 && temp < 30){
std::cout << "The temperature is good!";
}
else {
std::cout << "The temperature is bad!";
}*/

if(temp <= 0 || temp >= 30){
    std::cout << "The temperature is bad!\n";
}
else {
    std::cout << "The temperature is good!\n";
}

if(!sunny){
    std::cout << "It's cloudy outside!";
}
else{
    std::cout << "It's sunny outside!";
}

    return 0;
}