#include <iostream>

std::string concatStrings(std::string str1, std::string str2);

int main() {

    std::string firstString = "Bro ";
    std::string secondString = "Code";
    std::string result = concatStrings(firstString, secondString);

    std::cout << "Hello " << result << std::endl;

    return 0;
}

std::string concatStrings(std::string str1, std::string str2){
    return str1 + str2;
}