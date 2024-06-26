#include <iostream>
#include <unordered_set>

bool isHappy(int num) {
    std::unordered_set<int> seen;
    while (num != 1 && !seen.count(num)) {
        seen.insert(num);
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isHappy(num) ? " is" : " is not") << " a happy number." << std::endl;
    return 0;
}

