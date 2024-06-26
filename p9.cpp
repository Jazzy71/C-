#include <iostream>
#include <string>
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& n) : name(n) {}
    virtual void speak() const = 0;
};
class Cat : public Animal {
private:
    std::string color;

public:
    Cat(const std::string& n, const std::string& col)
        : Animal(n), color(col) {}
    void speak() const override {
        std::cout << "Cat " << name << " says: Meow!" << std::endl;
    }
};
class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(const std::string& n, const std::string& brd)
        : Animal(n), breed(brd) {}
    void speak() const override {
        std::cout << "Dog " << name << " says: Woof!" << std::endl;
    }
};

int main() {
    Cat cat("Whiskers", "Gray");
    Dog dog("Rex", "Labrador");
    const Animal* ptrAnimal1 = &cat;
    const Animal* ptrAnimal2 = &dog;
    ptrAnimal1->speak();
    ptrAnimal2->speak();

    return 0;
}

