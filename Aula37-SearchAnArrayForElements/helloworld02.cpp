#include <iostream>
#include <iostream>
#include <string>

int searchArray(const std::string array[], int size, const std::string& element);

int main() {

    std::string foods[] = {"Pizza", "Burger", "Hotdog"};
    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: ";
    std::cin >> myFood;

    index = searchArray(foods, size, myFood);

    if (index == -1) {
        std::cout << myFood << " is not found in the array.";
    } else {
        std::cout << myFood << " is found at index " << index << ".";
    }

    return 0;
}

int searchArray(const std::string array[], int size, const std::string& element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

