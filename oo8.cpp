#include <iostream>
class Number {
private:
    int value;
public:
    Number(int val = 0) : value(val) {}
    Number operator-(const Number& num) const {
        Number result;
        result.value = this->value - num.value;
        return result;
    }
    int getValue() const {
        return value;
    }
};

int main() {
    Number num1(10);
    Number num2(5);
    Number result = num1 - num2;
    std::cout << "Result of " << num1.getValue() << " - " << num2.getValue() << " = " << result.getValue() << std::endl;

    return 0;
}

