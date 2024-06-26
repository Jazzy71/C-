#include <iostream>
class Number {
private:
    int value;
public:
    Number(int val = 0) : value(val) {}
    Number& operator+=(const Number& num) {
        this->value += num.value;
        return *this; 
    }
    int getValue() const {
        return value;
    }
};
int main() {
    Number num1(10);
    Number num2(5);
    num1 += num2;
    std::cout << "Result of num1 += num2: " << num1.getValue() << std::endl;
    return 0;
}

