#include <iostream>
#include <string>
class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(const std::string& n, const std::string& s, int a) : name(n), species(s), age(a) {}

    void setName(const std::string& n) { name = n; }
    std::string getName() const { return name; }

    void setSpecies(const std::string& s) { species = s; }
    std::string getSpecies() const { return species; }

    void setAge(int a) { age = a; }
    int getAge() const { return age; }

    virtual ~Animal() {}
};
class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:
    Cat(const std::string& n, const std::string& s, int a, const std::string& c, const std::string& b) 
        : Animal(n, s, a), color(c), breed(b) {}

    void setColor(const std::string& c) { color = c; }
    std::string getColor() const { return color; }

    void setBreed(const std::string& b) { breed = b; }
    std::string getBreed() const { return breed; }
};
class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:
    Dog(const std::string& n, const std::string& s, int a, double w, const std::string& b) 
        : Animal(n, s, a), weight(w), breed(b) {}

    void setWeight(double w) { weight = w; }
    double getWeight() const { return weight; }

    void setBreed(const std::string& b) { breed = b; }
    std::string getBreed() const { return breed; }
};

int main() {
    Cat myCat("Whiskers", "Cat", 3, "Black", "Persian");
    std::cout << "Cat Name: " << myCat.getName() << std::endl;
    std::cout << "Cat Species: " << myCat.getSpecies() << std::endl;
    std::cout << "Cat Age: " << myCat.getAge() << std::endl;
    std::cout << "Cat Color: " << myCat.getColor() << std::endl;
    std::cout << "Cat Breed: " << myCat.getBreed() << std::endl;

    Dog myDog("Buddy", "Dog", 5, 30.5, "Labrador");
    std::cout << "Dog Name: " << myDog.getName() << std::endl;
    std::cout << "Dog Species: " << myDog.getSpecies() << std::endl;
    std::cout << "Dog Age: " << myDog.getAge() << std::endl;
    std::cout << "Dog Weight: " << myDog.getWeight() << " kg" << std::endl;
    std::cout << "Dog Breed: " << myDog.getBreed() << std::endl;

    return 0;
}

