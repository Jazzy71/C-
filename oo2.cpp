#include <iostream>
class Number {
private:
    int value;
public:
    Number(int val = 0) : value(val) {}
    Number operator+(const Number& num) {
        Number result;
        result.value = this->value + num.value;
        return result;
    }
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);
    Number sum = num1 + num2;
    std::cout << "After adding:" << std::endl;
    sum.display();
    return 0;
}

