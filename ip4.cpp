#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;
public:
    Employee(const std::string& n, int i, double s) : name(n), id(i), salary(s) {}

    void setName(const std::string& n) { name = n; }
    std::string getName() const { return name; }

    void setId(int i) { id = i; }
    int getId() const { return id; }

    void setSalary(double s) { salary = s; }
    double getSalary() const { return salary; }

    virtual ~Employee() {}
};
class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    Manager(const std::string& n, int i, double s, const std::string& d, double b) 
        : Employee(n, i, s), department(d), bonus(b) {}

    void setDepartment(const std::string& d) { department = d; }
    std::string getDepartment() const { return department; }

    void setBonus(double b) { bonus = b; }
    double getBonus() const { return bonus; }
};
class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    Engineer(const std::string& n, int i, double s, const std::string& sp, int h) 
        : Employee(n, i, s), specialty(sp), hours(h) {}

    void setSpecialty(const std::string& sp) { specialty = sp; }
    std::string getSpecialty() const { return specialty; }
    void setHours(int h) { hours = h; }
    int getHours() const { return hours; }
};

int main() {
    Manager mgr("Alice Johnson", 101, 90000, "Sales", 5000);
    std::cout << "Manager Name: " << mgr.getName() << std::endl;
    std::cout << "Manager ID: " << mgr.getId() << std::endl;
    std::cout << "Manager Salary: " << mgr.getSalary() << std::endl;
    std::cout << "Manager Department: " << mgr.getDepartment() << std::endl;
    std::cout << "Manager Bonus: " << mgr.getBonus() << std::endl;

    Engineer eng("Bob Smith", 102, 80000, "Software", 40);
    std::cout << "Engineer Name: " << eng.getName() << std::endl;
    std::cout << "Engineer ID: " << eng.getId() << std::endl;
    std::cout << "Engineer Salary: " << eng.getSalary() << std::endl;
    std::cout << "Engineer Specialty: " << eng.getSpecialty() << std::endl;
    std::cout << "Engineer Hours: " << eng.getHours() << std::endl;

    return 0;
}

