#include <iostream>
#include <string>
#include <cctype> // For std::tolower

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    // Iterate over the string from both ends towards the center
    while (left < right) {
        // Convert characters to lowercase for case-insensitive comparison
        char leftChar = std::tolower(str[left]);
        char rightChar = std::tolower(str[right]);

        // Ignore non-alphanumeric characters
        if (!std::isalnum(leftChar)) {
            left++;
        } else if (!std::isalnum(rightChar)) {
            right--;
        } else {
            // Compare characters
            if (leftChar != rightChar) {
                return false; // Not a palindrome
            }
            left++;
            right--;
        }
    }
    return true; // String is a palindrome
}

int main() {
    std::string inputString;

    // Input string from user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Check if the input string is a palindrome using the function
    if (isPalindrome(inputString)) {
        std::cout << "The string \"" << inputString << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "The string \"" << inputString << "\" is not a palindrome." << std::endl;
    }

    return 0;
}

