#include <iostream>

bool isAbundant(int num) {
    int sum = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum > num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isAbundant(num) ? " is" : " is not") << " an abundant number." << std::endl;
    return 0;
}

