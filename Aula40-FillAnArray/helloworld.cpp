#include <iostream>
#include <iostream>
#include <string>

int main() {

    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food item or 'q' to quit: #" << i << ": ";
        std::getline(std::cin, temp);
        if (temp == "q") {
            break;
        }
        else{
            foods[i] = temp;
        }
    }


    std::cout << "\nYou like the following food items:\n";

    for (int i = 0; i < size; i++) {
        if (!foods[i].empty()) {
            std::cout << foods[i] << std::endl;
        }
    }
    
    return 0;
}