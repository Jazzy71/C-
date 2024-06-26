#include <iostream>
#include <string>

class MyClass {
private:
    int data;
    std::string name;

public:
    MyClass(int d, const std::string& n) : data(d), name(n) {}

    friend std::ostream& operator<<(std::ostream& out, const MyClass& obj) {
        out << "Data: " << obj.data << ", Name: " << obj.name;
        return out;
    }
};

int main() {
   
    MyClass obj(42, "John");
    std::cout << "Object contents: " << obj << std::endl;

    return 0;
}

