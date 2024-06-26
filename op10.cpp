#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a ^= b ^= a ^= b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

