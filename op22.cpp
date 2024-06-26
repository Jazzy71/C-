#include <iostream>

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; ++i)
        sum += num % i == 0 ? i : 0;
    return sum == num;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << num << (isPerfect(num) ? " is a perfect number." : " is not a perfect number.") << std::endl;
    return 0;
}

