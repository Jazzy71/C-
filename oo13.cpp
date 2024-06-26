#include <iostream>
void sum(int mat1[3][3], int mat2[3][3]) {
    int result[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    std::cout << "Sum of matrices:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void sum(int arr1[], int arr2[], int size) {
    int result[size];
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
    std::cout << "Sum of arrays:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}

int main() {

    int mat1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7},
                      {6, 5, 4},
                      {3, 2, 1}};
    sum(mat1, mat2);]
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]); 
    sum(arr1, arr2, size);

    return 0;
}

