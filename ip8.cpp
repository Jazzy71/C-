#include <iostream>

int main() {
    char ch = 'A';
    char* ptr = &ch;
    std::cout << "The value of ch is: " << *ptr << std::endl;
    std::cout << "The address of ch is: " << static_cast<void*>(ptr) << std::endl;

    return 0;
}

