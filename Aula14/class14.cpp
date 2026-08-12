#include <iostream>

int main() {

int grade = 75;

/*if(grade >= 60){
    std::cout << "You've passed!";
}
else{
    std::cout << "You haven't passed!";
}*/

grade >= 60 ? std::cout << "You pass!"
else{
    std::cout << "You fail!"
}


    return 0;
}