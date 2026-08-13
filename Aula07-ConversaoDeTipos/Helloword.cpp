#include <iostream>

int main() {

// type conversation

  //double x = (int) 3.14;
//std::cout << x; (the result becomes 3)

/*char x = 100
std::cout << x; (the result becomes 'd')*/

/*std::cout << (char) 100; (the result also becomes 'd')*/

int correct = 8;
int questions = 10;

double score = correct / (double) questions * 100;

std::cout << score << '%';

    return 0;
}