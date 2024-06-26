#include <iostream>
#include <stdexcept> 
void processInput(int num) {
    if (num < 0) {
        throw std::invalid_argument("Negative numbers not allowed");
    } else if (num == 0) {
        throw "Zero is not a valid input";
    } else if (num % 2 != 0) {
        throw std::runtime_error("Only even numbers are allowed");
    }
    std::cout << "Input is valid: " << num << std::endl;
}

int main() {
    try {
        processInput(10);
        processInput(-5); 
        processInput(1); 
    } catch (const std::invalid_argument& e) {
        std::cerr << "std::invalid_argument caught: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "std::runtime_error caught: " << e.what() << std::endl;
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}

