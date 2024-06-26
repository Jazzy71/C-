#include <iostream>
#include <cstring>
char* concat(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2 + 1; 
    char* result = new char[totalLen];
    strcpy(result, str1);
    strcat(result, str2);

    return result;
}
std::string concat(const std::string& s1, const std::string& s2) {
    return s1 + s2;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    char* concatStr = concat(str1, str2);
    std::cout << "Concatenated C-style strings: " << concatStr << std::endl;
    delete[] concatStr; 
    std::string s1 = "Hi, ";
    std::string s2 = "there!";
    std::string concatString = concat(s1, s2);
    std::cout << "Concatenated std::string objects: " << concatString << std::endl;

    return 0;
}

