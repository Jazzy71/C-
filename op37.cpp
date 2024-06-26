#include <iostream>
using namespace std;

int main() {
    int arr[100], size, position;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) cin >> arr[i];
    cout << "Enter the position of the element to delete: ";
    cin >> position;
    if (position < 0 || position >= size) cout << "Invalid position to delete element." << endl;
    else {
        for (int i = position; i < size - 1; ++i) arr[i] = arr[i + 1];
        --size;
        cout << "Array after deletion: ";
        for (int i = 0; i < size; ++i) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

