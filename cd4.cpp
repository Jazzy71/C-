#include <iostream>
#include <string>
class Book {
private:
    std::string title;
    std::string author;
    int year;
public:
    Book(const std::string& title, const std::string& author, int year) 
        : title(title), author(author), year(year) {
        std::cout << "Book object created: \"" << title << "\" by " << author << " (" << year << ")" << std::endl;
    }
    ~Book() {
        std::cout << "Book object destroyed: \"" << title << "\" by " << author << " (" << year << ")" << std::endl;
    }
    void display() {
        std::cout << "Book Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << year << std::endl;
    }
};
int main() {
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    myBook.display();

    return 0;
}
