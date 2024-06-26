#include <iostream>

class Counter {
private:
    int count;

public:
    Counter(int initialCount = 0) : count(initialCount) {}
    Counter& operator++() {
        count++;
        return *this;
    }
    Counter operator++(int) {
        Counter temp(*this); 
        ++(*this);           
        return temp;      
    }
    void display() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c1(5);
    ++c1;
    std::cout << "After prefix increment:" << std::endl;
    c1.display();
    Counter c2 = c1++;
    std::cout << "After postfix increment:" << std::endl;
    c1.display();
    c2.display();

    return 0;
}

