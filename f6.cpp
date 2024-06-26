#include <iostream>
#include <string>
int countElements(const std::string& str) {
    return str.length();  
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
    int elementCount = countElements(inputString);
    std::cout << "Number of elements in the string: " << elementCount << std::endl;

    return 0;
}

