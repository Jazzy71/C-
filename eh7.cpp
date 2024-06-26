#include <iostream>
#include <stdexcept> 

void processInput(int num) {
    if (num <= 0) {
        throw std::invalid_argument("Number must be greater than zero");
    }
    std::cout << "Input is valid: " << num << std::endl;
}

int main() {
    try {
        int userInput;
        std::cout << "Enter a positive number: ";
        std::cin >> userInput;
        processInput(userInput);

        std::cout << "End of try block" << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument exception caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception caught: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }

    std::cout << "End of program" << std::endl;

    return 0;
}

