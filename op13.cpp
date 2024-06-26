#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << (num % 3 == 0 ? "Divisible by 3" : "Not divisible by 3") << endl;

    return 0;
}

