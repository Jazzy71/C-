#include <iostream>

int main() {
    char str[] = "Hello, World!";
    char* ptr = str;
    std::cout << "The string is: ";
    while (*ptr != '\0') {
        std::cout << *ptr;
        ptr++;
    }
    std::cout << std::endl;
    std::cout << "The address of the array is: " << static_cast<void*>(str) << std::endl;

    return 0;
}

