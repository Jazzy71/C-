#include <iostream>
#include <string>
class Student {
private:
    std::string name;
    int age;
    std::string major;

public:
    Student(const std::string& name, int age, const std::string& major) 
        : name(name), age(age), major(major) {
        std::cout << "Student object created: " << name << ", Age: " << age << ", Major: " << major << std::endl;
    }
    ~Student() {
        std::cout << "Student object destroyed: " << name << ", Age: " << age << ", Major: " << major << std::endl;
    }
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Major: " << major << std::endl;
    }
};

int main() {
    Student student1("John Doe", 20, "Computer Science");
    student1.display();

    return 0;
}

