#include <iostream>
void printArray(const int arr[], int size) {
    std::cout << "Printing integer array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void printArray(const double arr[], int size) {
    std::cout << "Printing double array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void printArray(const char arr[], int size) {
    std::cout << "Printing character array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    printArray(intArray, intSize);
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    printArray(doubleArray, doubleSize)
    char charArray[] = {'H', 'e', 'l', 'l', 'o'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]);
    printArray(charArray, charSize);

    return 0;
}

