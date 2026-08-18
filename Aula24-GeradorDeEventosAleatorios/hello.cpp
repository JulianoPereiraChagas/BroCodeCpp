#include <iostream>
#include <ctime>

int main() {

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "Voce ganhou um Playstation 5!\n";
        break;
        case 2: std::cout << "Voce ganhou uma televisao 8K!\n";
        break;
        case 3: std::cout << "Voce ganhou um PC Gamer!\n";
        break;
        case 4: std::cout << "Voce ganhou um celular 5G!\n";
        break;
        case 5: std::cout << "Voce ganhou uma casa luxo!\n";
        break;
    }

    return 0;
}