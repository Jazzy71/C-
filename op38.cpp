#include <iostream>
using namespace std;

int main() {
    int arr[100], size, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all elements: " << sum << endl;
    return 0;
}

