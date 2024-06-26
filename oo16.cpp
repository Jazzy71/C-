#include <iostream>
unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Factorial of negative number is undefined." << std::endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
double factorial(double x) {
    if (x < 0) {
        std::cerr << "Factorial of negative number is undefined." << std::endl;
        return 0.0;
    }
    double result = 1.0;
    while (x > 1.0) {
        result *= x;
        x -= 1.0;
    }
    return result;
}

int main() {
    int n = 5;
    std::cout << "Factorial of " << n << " (integer): " << factorial(n) << std::endl;
    double x = 5.5;
    std::cout << "Factorial of " << x << " (floating-point): " << factorial(x) << std::endl;

    return 0;
}

