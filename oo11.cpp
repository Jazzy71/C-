#include <iostream>
int max(int a, int b) {
    return (a > b) ? a : b;
}
double max(double a, double b) {
    return (a > b) ? a : b;
}
char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = max(5, 3);
    double doubleMax = max(2.5, 3.7);
    char charMax = max('a', 'z');
    std::cout << "Maximum of integers: " << intMax << std::endl;
    std::cout << "Maximum of floating-point numbers: " << doubleMax << std::endl;
    std::cout << "Maximum of characters: " << charMax << std::endl;

    return 0;
}

