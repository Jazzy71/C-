#include <iostream>
#include <string>
#include <cctype>
bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        char leftChar = std::tolower(str[left]);
        char rightChar = std::tolower(str[right]);
        if (!std::isalnum(leftChar)) {
            left++;
        } else if (!std::isalnum(rightChar)) {
            right--;
        } else {
            if (leftChar != rightChar) {
                return false; 
            }
            left++;
            right--;
        }
    }
    return true; 
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
    if (isPalindrome(inputString)) {
        std::cout << "The string \"" << inputString << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "The string \"" << inputString << "\" is not a palindrome." << std::endl;
    }

    return 0;
}

