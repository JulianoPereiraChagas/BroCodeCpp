#include <iostream>
#include <string>

int main()
{
    std::string name;

    while (1==1)
    {
        std::cout << "I'm stuck in a infinite loop... ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name;

    return 0;
}