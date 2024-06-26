#include <iostream>
#include <vector>
#include <limits>
int findMin(const std::vector<int>& arr) {
    int min = std::numeric_limits<int>::max(); 
    for (int num : arr) {
        if (num < min) {
            min = num;
        }
    }
    return min;
}


int findMax(const std::vector<int>& arr) {
    int max = std::numeric_limits<int>::min(); 
    for (int num : arr) {
        if (num > max) {
            max = num; 
        }
    }
    return max;
}

int main() {
    std::vector<int> array = {5, 2, 8, 1, 4, 9, 3};
    int minElement = findMin(array);
    int maxElement = findMax(array);
    std::cout << "Array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Minimum element: " << minElement << std::endl;
    std::cout << "Maximum element: " << maxElement << std::endl;

    return 0;
}

