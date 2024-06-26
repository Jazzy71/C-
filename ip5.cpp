#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    std::string gender;

public:
    Person(const std::string& n, int a, const std::string& g) : name(n), age(a), gender(g) {}
    void setName(const std::string& n) { name = n; }
    std::string getName() const { return name; }

    void setAge(int a) { age = a; }
    int getAge() const { return age; }

    void setGender(const std::string& g) { gender = g; }
    std::string getGender() const { return gender; }

    virtual ~Person() {}
};
class Student : public Person {
private:
    int rollNumber;
    std::string className;

public:
    Student(const std::string& n, int a, const std::string& g, int r, const std::string& c) 
        : Person(n, a, g), rollNumber(r), className(c) {}
    void setRollNumber(int r) { rollNumber = r; }
    int getRollNumber() const { return rollNumber; }
    void setClassName(const std::string& c) { className = c; }
    std::string getClassName() const { return className; }
};
class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    Teacher(const std::string& n, int a, const std::string& g, const std::string& s, double sal) 
        : Person(n, a, g), subject(s), salary(sal) {}
    void setSubject(const std::string& s) { subject = s; }
    std::string getSubject() const { return subject; }
    void setSalary(double sal) { salary = sal; }
    double getSalary() const { return salary; }
};

int main() {
    Student stu("John Doe", 20, "Male", 12345, "Computer Science");
    std::cout << "Student Name: " << stu.getName() << std::endl;
    std::cout << "Student Age: " << stu.getAge() << std::endl;
    std::cout << "Student Gender: " << stu.getGender() << std::endl;
    std::cout << "Student Roll Number: " << stu.getRollNumber() << std::endl;
    std::cout << "Student Class: " << stu.getClassName() << std::endl;
    Teacher teach("Jane Smith", 35, "Female", "Mathematics", 50000);
    std::cout << "Teacher Name: " << teach.getName() << std::endl;
    std::cout << "Teacher Age: " << teach.getAge() << std::endl;
    std::cout << "Teacher Gender: " << teach.getGender() << std::endl;
    std::cout << "Teacher Subject: " << teach.getSubject() << std::endl;
    std::cout << "Teacher Salary: " << teach.getSalary() << std::endl;

    return 0;
}

