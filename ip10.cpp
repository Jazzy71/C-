#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string* ptr = &str;
    std::cout << "The value of str is: " << *ptr << std::endl;
    std::cout << "The address of str is: " << ptr << std::endl;

    return 0;
}

