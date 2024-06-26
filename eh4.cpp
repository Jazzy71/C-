#include <iostream>
#include <stdexcept> 
void processInput(int num) {
    if (num < 0) {
        throw std::invalid_argument("Negative numbers not allowed");
    } else if (num == 0) {
        throw std::out_of_range("Zero is out of range");
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
    } catch (const std::out_of_range& e) {
        std::cerr << "std::out_of_range caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception caught: " << e.what() << std::endl;
    }

    return 0;
}

