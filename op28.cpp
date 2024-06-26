#include <iostream>

bool isNeon(int num) {
    int square = num * num;
    int sum = 0;
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isNeon(num) ? " is" : " is not") << " a neon number." << std::endl;
    return 0;
}

