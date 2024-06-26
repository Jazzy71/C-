#include <iostream>
using namespace std;

int main() {
    int arr[100], size, value;
    int count = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the value to count occurrences: ";
    cin >> value;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            ++count;
        }
    }
    cout << "Number of occurrences of " << value << ": " << count << endl;
    return 0;
}

