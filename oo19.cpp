#include <iostream>
#include <cmath> 
int absolute(int num) {
    return std::abs(num);
}
double absolute(double num) {
    return std::abs(num);
}

int main() {
    int numInt = -5;
    std::cout << "Absolute value of " << numInt << " (integer): " << absolute(numInt) << std::endl;\
    double numDouble = -5.5;
    std::cout << "Absolute value of " << numDouble << " (floating-point): " << absolute(numDouble) << std::endl;

    return 0;
}

