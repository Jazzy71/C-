#include <iostream>
#include <fstream>
#include <stdexcept>
class FileException : public std::runtime_error {
public:
    FileException(const std::string& message)
        : std::runtime_error(message) {}
};
class FileStream {
private:
    std::ofstream file;

public:
    FileStream(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw FileException("Failed to open file: " + filename);
        }
    }
    ~FileStream() {
        if (file.is_open()) {
            file.close();
        }
    }
    void write(const std::string& data) {
        if (file.is_open()) {
            file << data;
        } else {
            throw FileException("File is not open.");
        }
    }
};

int main() {
    try {
        FileStream file("test.txt");
        file.write("Hello, RAII!");
        throw std::runtime_error("Simulated exception");
        std::cout << "After exception" << std::endl;
    } catch (const FileException& e) {
        std::cerr << "FileException caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}

