#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    std::cout << "The elements of the array are: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    std::cout << "The address of the array is: " << ptr << std::endl;

    return 0;
}

