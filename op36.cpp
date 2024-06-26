#include <iostream>
using namespace std;

int main() {
    int arr[100], size, element, position;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) cin >> arr[i];
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element: ";
    cin >> position;
    if (position < 0 || position > size) cout << "Invalid position to insert element." << endl;
    else {
        for (int i = size; i > position; --i) arr[i] = arr[i - 1];
        arr[position] = element;
        ++size;
        cout << "Array after insertion: ";
        for (int i = 0; i < size; ++i) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

