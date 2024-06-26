#include <iostream>
#include <stdexcept>
class CustomException : public std::exception {
private:
    std::string message;

public:
    CustomException(const std::string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
void processInput(int num) {
    if (num < 0) {
        throw CustomException("Negative numbers not allowed");
    } else if (num == 0) {
        throw CustomException("Zero is not a valid input");
    }
    std::cout << "Input is valid: " << num << std::endl;
}

int main() {
    try {
        processInput(10);
        processInput(-5); 
        processInput(0);  
    } catch (const CustomException& e) {
        std::cerr << "CustomException caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception caught: " << e.what() << std::endl;
    }

    return 0;
}

