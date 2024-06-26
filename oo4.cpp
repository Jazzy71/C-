#include <iostream>
#include <string>
class MyClass {
private:
    int data;
    std::string name;
public:
    MyClass(int d, const std::string& n) : data(d), name(n) {}
    bool operator==(const MyClass& other) const {
        return (data == other.data) && (name == other.name);
    }
    int getData() const {
        return data;
    }
    const std::string& getName() const {
        return name;
    }
};

int main() {
    MyClass obj1(42, "John");
    MyClass obj2(42, "John");
    if (obj1 == obj2) {
        std::cout << "Objects are equal" << std::endl;
    } else {
        std::cout << "Objects are not equal" << std::endl;
    }

    return 0;
}

