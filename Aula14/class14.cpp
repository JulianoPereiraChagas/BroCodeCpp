#include <iostream>

int main() {

int grade = 75;

/*if(grade >= 60){
    std::cout << "You've passed!";
}
else{
    std::cout << "You haven't passed!";
}*/

// grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

/* int number = 9;

number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN"; */

bool hungry = true;

// hungry ? std::cout << "You are hungry" : std::cout << "You are full";

std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}