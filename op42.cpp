#include <iostream>
using namespace std;

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;
    cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    int index = 0;
    for (int i = 0; i < size1; ++i) {
        merged[index++] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        merged[index++] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < index; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

