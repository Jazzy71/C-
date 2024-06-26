#include <iostream>
#include <stdexcept>
class Array {
private:
    int* data;
    int size;
public:
    Array(int sz, int initialValue = 0) : size(sz) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = initialValue;
        }
    }
    ~Array() {
        delete[] data;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array arr(5, 1);
    std::cout << "Array elements initially:" << std::endl;
    arr.display();
    arr[2] = 10;
    arr[4] = 20;
    std::cout << "Array elements after modification:" << std::endl;
    arr.display();
    std::cout << "Element at index 2: " << arr[2] << std::endl;
    std::cout << "Element at index 4: " << arr[4] << std::endl; 

    return 0;
}

