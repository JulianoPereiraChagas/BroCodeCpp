#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

char getUserChoice();
char getComputerChoice();
void showChoices(char player, char computer);
void chooseWinner(char player, char computer);

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    char player = getUserChoice();
    char computer = getComputerChoice();
    showChoices(player, computer);
    chooseWinner(player, computer);
    return 0;
}
char getUserChoice() {
    char choice;
    do {
        std::cout << "Escolha Pedra (P), Papel (L) ou Tesoura (T): ";
        std::cin >> choice;
        if (!std::cin) {
            return 'P';
        }
        choice = static_cast<char>(std::toupper(static_cast<unsigned char>(choice)));
    } while (choice != 'P' && choice != 'L' && choice != 'T');
    return choice;
}
char getComputerChoice() {
    char choices[] = {'P', 'L', 'T'};
    int randomIndex = rand() % 3;
    return choices[randomIndex];
}
void showChoices(char player, char computer) {
    std::cout << "Você escolheu: " << player << std::endl;
    std::cout << "O computador escolheu: " << computer << std::endl;
}
void chooseWinner(char player, char computer) {
    if (player == computer) {
        std::cout << "Empate!" << std::endl;
    } else if ((player == 'P' && computer == 'T') ||
               (player == 'L' && computer == 'P') ||
               (player == 'T' && computer == 'L')) {
        std::cout << "Você venceu!" << std::endl;
    } else {
        std::cout << "Computador venceu!" << std::endl;
    }
}