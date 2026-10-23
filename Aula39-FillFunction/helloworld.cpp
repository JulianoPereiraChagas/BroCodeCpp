
#include <algorithm>
#include <iostream>
#include <string>

int main() {

    std::string foods[100];

    std::fill(foods, foods + 100, "pizza");

    for(std::string food : foods) {
        std::cout << food << '\n';
    }

    return 0;
}
