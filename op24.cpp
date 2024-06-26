#include <iostream>

bool isHarshad(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isHarshad(num) ? " is" : " is not") << " a Harshad number." << std::endl;
    return 0;
}

