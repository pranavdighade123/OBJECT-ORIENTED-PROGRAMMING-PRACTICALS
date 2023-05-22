/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 04

AIM: Implement a C++ program to understand concept matrix operations.
*/

#include <iostream>
#include <vector>

class MAT {
private:
    int rows;
    int cols;
    std::vector<std::vector<int>> matrix;

public:
    // Constructor
    MAT(int m, int n) : rows(m), cols(n) {
        matrix.resize(m, std::vector<int>(n, 0));
    }

    // Function to read matrix elements
    void readMatrix() {
        std::cout << "Enter matrix elements:" << std::endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cin >> matrix[i][j];
            }
        }
    }

    // Function to display matrix elements
    void displayMatrix() {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << matrix[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }

    // Function to add two matrices
    MAT operator+(const MAT& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions must be the same for addition.");
        }

        MAT result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }

    // Function to multiply two matrices
    MAT operator*(const MAT& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Invalid matrix dimensions for multiplication.");
        }

        int m = rows;
        int n = other.cols;
        int p = cols;

        MAT result(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < p; k++) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }

    // Function to check if two matrices are equal
    bool operator==(const MAT& other) const {
        if (rows != other.rows || cols != other.cols) {
            return false;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != other.matrix[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    int m1, n1, m2, n2;

    // Read dimensions for matrix 1
    std::cout << "Enter dimensions for matrix 1 (m x n): ";
    std::cin >> m1 >> n1;
    MAT matrix1(m1, n1);
    matrix1.readMatrix();

    // Read dimensions for matrix 2
    std::cout << "Enter dimensions for matrix 2 (m x n): ";
    std::cin >> m2 >> n2;
    MAT matrix2(m2, n2);
    matrix2.readMatrix();

    // Perform matrix operations
    try {
        // Addition
        MAT sum = matrix1 + matrix2;
        std::cout << "Sum of matrices:" << std::endl;
        sum.displayMatrix();

        // Multiplication
        MAT product = matrix1 * matrix2;
        std::cout << "Product of matrices:" << std::endl;
        product.displayMatrix();

        // Equality check
        if (matrix1 == matrix2) {
            std::cout << "Matrices are equal." << std::endl;
        } else {
            std::cout << "Matrices are not equal." << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
