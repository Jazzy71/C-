#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows (odd number): ";
    std::cin >> rows;

    // Upper half of the diamond
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i - 1; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower half of the diamond
    for (int i = rows - 2; i >= 0; --i) {
        for (int j = 0; j < rows - i - 1; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

