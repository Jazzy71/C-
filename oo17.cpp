#include <iostream>
#include <algorithm> 
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}
void printArray(const int arr[], int size) {
    std::cout << "Sorted integer array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(4) << arr[i];
    }
    std::cout << std::endl;
}
void printArray(const double arr[], int size) {
    std::cout << "Sorted double array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << std::fixed << std::setprecision(2) << std::setw(6) << arr[i];
    }
    std::cout << std::endl;
}
int main() {
    int intArray[] = {5, 2, 8, 1, 3};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    sortArray(intArray, intSize);
    printArray(intArray, intSize);
    double doubleArray[] = {3.3, 1.1, 2.2, 5.5, 4.4};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    sortArray(doubleArray, doubleSize);
    printArray(doubleArray, doubleSize);
    return 0;
}
