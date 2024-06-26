#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a == b)
        cout << "The numbers are equal." << endl;
    else
        cout << "The numbers are not equal." << endl;

    return 0;
}

