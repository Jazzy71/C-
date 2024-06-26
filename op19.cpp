#include <iostream>
#include <string>
bool isPalindrome(const std::string& str) {
    int i = 0, j = str.size() - 1;
    while (i < j && str[i] == str[j]) {
        ++i;
        --j;
    }
    return i >= j;
}
int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << str << (isPalindrome(str) ? " is" : " is not") << " a palindrome." << std::endl;
    return 0;
}
