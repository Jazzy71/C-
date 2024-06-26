#include <iostream>

class FunctionObject {
public:
    int operator()(int x, int y) const {
        return x + y;
    }
};

int main() {
    FunctionObject funcObj;
    int result = funcObj(3, 4);

    std::cout << "Result of funcObj(3, 4): " << result << std::endl;

    return 0;
}

