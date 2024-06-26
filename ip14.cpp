#include <iostream>
#include <string>
class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person1("John Doe", 30);
    Person* ptr = &person1;
    std::cout << "Displaying attributes using pointer:" << std::endl;
    ptr->display();

    return 0;
}

