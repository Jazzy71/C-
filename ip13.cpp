#include <iostream>
int main() {
    float floatArray[] = {3.14, 2.718, 1.414, 0.577, 2.302};
    float* ptr = floatArray;
    std::cout << "The elements of the array are: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    std::cout << "The address of the array is: " << ptr << std::endl;

    return 0;
}

