#include <iostream>
#include <string>
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& n) : name(n) {}
    virtual void eat() {
        std::cout << "Animal " << name << " is eating." << std::endl;
    }
};
class Herbivore : public Animal {
public:
    Herbivore(const std::string& n) : Animal(n) {}
    void eat() override {
        std::cout << "Herbivore " << name << " is eating plants." << std::endl;
    }
};
class Carnivore : public Animal {
public:
    Carnivore(const std::string& n) : Animal(n) {}
    void eat() override {
        std::cout << "Carnivore " << name << " is eating meat." << std::endl;
    }
};

int main() {
    Herbivore herb("Deer");
    Carnivore carn("Lion");
    Animal* ptrAnimal1 = &herb;
    Animal* ptrAnimal2 = &carn;
    ptrAnimal1->eat();
    ptrAnimal2->eat();

    return 0;
}

