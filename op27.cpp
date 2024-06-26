#include <iostream>

bool isBuzz(int num) {
    return num % 7 == 0 || num % 10 == 7;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isBuzz(num) ? " is" : " is not") << " a buzz number." << std::endl;
    return 0;
}

