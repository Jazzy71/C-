#include <iostream>

void innerFunction(int denom) {
    try {
        if (denom == 0) {
            throw std::runtime_error("Division by zero error");
        }
        int result = 10 / denom;
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught exception inside innerFunction: " << e.what() << std::endl;
        throw; 
    }
}

void outerFunction(int denom) {
    try {
        innerFunction(denom);
    } catch (const std::exception& e) {
        std::cout << "Caught exception inside outerFunction: " << e.what() << std::endl;
    }
}

int main() {
    try {
        outerFunction(2);
        outerFunction(0);
    } catch (const std::exception& e) {
        std::cout << "Caught exception in main: " << e.what() << std::endl;
    }

    return 0;
}

