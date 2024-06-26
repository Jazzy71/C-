#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100], size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != INT_MIN) {
        cout << "Second largest element: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element." << endl;
    }

    return 0;
}

