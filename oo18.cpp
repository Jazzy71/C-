#include <iostream>
#include <cmath> 
long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    int baseInt = 2;
    int exponentInt = 5;
    std::cout << "Power of " << baseInt << " raised to " << exponentInt << " (integer): " << power(baseInt, exponentInt) << std::endl;
    double baseDouble = 2.5;
    double exponentDouble = 3.0;
    std::cout << "Power of " << baseDouble << " raised to " << exponentDouble << " (floating-point): " << power(baseDouble, exponentDouble) << std::endl;

    return 0;
}

