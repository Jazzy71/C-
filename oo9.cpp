#include <iostream>
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);
    double doubleResult = add(2.5, 3.7);
    std::cout << "Result of adding integers: " << intResult << std::endl;
    std::cout << "Result of adding floating-point numbers: " << doubleResult << std::endl;

    return 0;
}

