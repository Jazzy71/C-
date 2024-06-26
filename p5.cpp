#include <iostream>
#include <string>
class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}
    virtual void greet() const {
        std::cout << "Hello, I am " << name << "." << std::endl;
    }
};
class Student : public Person {
private:
    std::string major;

public:
    Student(const std::string& n, const std::string& m) : Person(n), major(m) {}
    void greet() const override {
        std::cout << "Hi, I am " << name << ", a student majoring in " << major << "." << std::endl;
    }
};
class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher(const std::string& n, const std::string& subj) : Person(n), subject(subj) {}

    void greet() const override {
        std::cout << "Good day, I am " << name << ", teaching " << subject << "." << std::endl;
    }
};

int main() {
    Student student("Alice", "Computer Science");
    Teacher teacher("Mr. Smith", "Mathematics");
    const Person* ptrPerson1 = &student;
    const Person* ptrPerson2 = &teacher;
    ptrPerson1->greet();
    ptrPerson2->greet();
    return 0;
}

