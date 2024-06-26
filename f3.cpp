#include <iostream>
#include <string>
std::string reverseString(const std::string& str) {
    std::string reversedStr = str;
    int n = reversedStr.length();
    for (int i = 0; i < n / 2; ++i) {
        std::swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    return reversedStr;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string reversedString = reverseString(inputString);
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}

