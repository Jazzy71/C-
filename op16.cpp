#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number whose multiplication table you want to print: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}

