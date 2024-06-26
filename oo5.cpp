#include <iostream>
#include <vector>
class Matrix {
private:
    std::vector<std::vector<int>> mat;
    int rows;
    int cols;
public:
    Matrix(int r, int c, const std::vector<std::vector<int>>& values) 
        : rows(r), cols(c), mat(values) {}
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            std::cerr << "Matrix dimensions are not compatible for multiplication!" << std::endl;
            return Matrix(0, 0, std::vector<std::vector<int>>());
        }
        int resultRows = rows;
        int resultCols = other.cols;
        std::vector<std::vector<int>> result(resultRows, std::vector<int>(resultCols, 0));
        for (int i = 0; i < resultRows; ++i) {
            for (int j = 0; j < resultCols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return Matrix(resultRows, resultCols, result);
    }
    void display() const {
        for (const auto& row : mat) {
            for (int elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    }
};
int main() {
    Matrix A(2, 3, {{1, 2, 3}, {4, 5, 6}});
    Matrix B(3, 2, {{7, 8}, {9, 10}, {11, 12}});
    Matrix C = A * B;
    std::cout << "Matrix A:" << std::endl;
    A.display();
    std::cout << std::endl;
    std::cout << "Matrix B:" << std::endl;
    B.display();
    std::cout << std::endl;
    std::cout << "Result of A * B:" << std::endl;
    C.display();
    return 0;
}
