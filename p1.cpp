#include <iostream>
#include <string>
class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}
    virtual void work() {
        std::cout << "Person " << name << " is working." << std::endl;
    }
};
class Employee : public Person {
private:
    std::string department;

public:
    Employee(const std::string& n, const std::string& dept) : Person(n), department(dept) {}
    void work() override {
        std::cout << "Employee " << name << " is working in " << department << "." << std::endl;
    }
};
class Manager : public Person {
private:
    std::string department;

public:
    Manager(const std::string& n, const std::string& dept) : Person(n), department(dept) {}
    void work() override {
        std::cout << "Manager " << name << " is managing " << department << "." << std::endl;
    }
};

int main() {
    Employee emp("John Doe", "Engineering");
    Manager mgr("Jane Smith", "Operations");

    Person* ptrPerson1 = &emp;
    Person* ptrPerson2 = &mgr;

    ptrPerson1->work();
    ptrPerson2->work();

    return 0;
}

