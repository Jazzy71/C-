#include <iostream>

int main() {
    double num = 3.14159;

    double* ptr = &num;

    std::cout << "The value of num is: " << *ptr << std::endl;

    std::cout << "The address of num is: " << ptr << std::endl;

    return 0;
}

