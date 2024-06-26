#include <iostream>

// Function declarations
void greet() {
    std::cout << "Hello, World!" << std::endl;
}

void goodbye() {
    std::cout << "Goodbye, World!" << std::endl;
}

int main() {
    // Declare a pointer to a function that takes no arguments and returns void
    void (*funcPtr)();

    // Assign the address of the function greet to the pointer
    funcPtr = greet;

    // Call the function using the pointer
    std::cout << "Calling function using pointer:" << std::endl;
    funcPtr();

    // Assign the address of the function goodbye to the pointer
    funcPtr = goodbye;

    // Call the function using the pointer
    std::cout << "Calling function using pointer:" << std::endl;
    funcPtr();

    return 0;
}

