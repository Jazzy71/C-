#include <iostream>
#include <cmath>

bool isNarcissistic(int num) {
    int originalNum = num;
    int numDigits = static_cast<int>(log10(num)) + 1;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isNarcissistic(num) ? " is" : " is not") << " a narcissistic number." << std::endl;
    return 0;
}
