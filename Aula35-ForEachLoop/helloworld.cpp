#include <iostream>

int main() {

    std::string students[] = {"Alice", "Bob", "Charlie"};

    for(const std::string& student : students) {
        std::cout << student << '\n';
    }

    return 0;
}