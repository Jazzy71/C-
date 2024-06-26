#include <iostream>
void greet() {
    std::cout << "Hello, World!" << std::endl;
}

void goodbye() {
    std::cout << "Goodbye, World!" << std::endl;
}

int main() {
    void (*funcPtr)();
    funcPtr = greet;
    std::cout << "Calling function using pointer:" << std::endl;
    funcPtr();
    funcPtr = goodbye;
    std::cout << "Calling function using pointer:" << std::endl;
    funcPtr();

    return 0;
}

