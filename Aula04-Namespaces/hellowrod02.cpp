#include <iostream>

namespace first{
    int x = 10;
}

namespace second{
    int x = 20;
}

int main() {
    // Namespace is a declarative region that provides a scope to identifiers (names of types, functions, variables, etc)
    // It helps organize code, avoid naming conflicts, and make code more modular and maintainable

    using namespace second;

    std::cout << first::x;

    return 0;
}