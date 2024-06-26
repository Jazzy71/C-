#include <iostream>
#include <stdexcept> 

void processInput(int num) {
    if (num < 0) {
        throw std::invalid_argument("Negative numbers not allowed");
    } else if (num == 0) {
        throw "Zero is not a valid input";
    }
    std::cout << "Input is valid: " << num << std::endl;
}

int main() {
    try {
        processInput(10);
        processInput(-5); 
        processInput(0); 
    } catch (const std::invalid_argument& e) {
        std::cerr << "std::invalid_argument caught: " << e.what() << std::endl;
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}

