#include <iostream>
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {
        std::cout << "Rectangle object created with length " << length << " and width " << width << std::endl;
    }
    ~Rectangle() {
        std::cout << "Rectangle object destroyed with length " << length << " and width " << width << std::endl;
    }
    double calculateArea() {
        return length * width;
    }
    double calculatePerimeter() {
        return 2 * (length + width);
    }
    void display() {
        std::cout << "Rectangle details - Length: " << length << ", Width: " << width << std::endl;
        std::cout << "Area: " << calculateArea() << ", Perimeter: " << calculatePerimeter() << std::endl;
    }
};
int main() {
    Rectangle myRectangle(5.0, 3.0);
    myRectangle.display();
    return 0;
}
