#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; ++i) {
        int number = 1;
        // Print spaces
        for (int j = 0; j < rows - i - 1; ++j) {
            std::cout << " ";
        }
        // Print numbers
        for (int j = 0; j <= i; ++j) {
            std::cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        std::cout << std::endl;
    }

    return 0;
}

