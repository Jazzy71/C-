#include <iostream>
using namespace std;

int main() {
    int arr[100], size;
    double sum = 0, average;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    average = sum / size;
    cout << "Average of all elements: " << average << endl;
    return 0;
}

