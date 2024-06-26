#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num, sum = 0, numDigits = log10(num) + 1;
    while (num > 0) {
        sum += pow(num % 10, numDigits);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isArmstrong(num) ? " is" : " is not") << " an Armstrong number." << std::endl;
    return 0;
}

