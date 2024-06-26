#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;
    int matrix[rows][cols];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    int sumDiagonal1 = 0, sumDiagonal2 = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == j) {
                sumDiagonal1 += matrix[i][j]; 
            }
            if (i + j == rows - 1) {
                sumDiagonal2 += matrix[i][j]; 
            }
        }
    }
    cout << "Sum of main diagonal: " << sumDiagonal1 << endl;
    cout << "Sum of secondary diagonal: " << sumDiagonal2 << endl;
    return 0;
}

