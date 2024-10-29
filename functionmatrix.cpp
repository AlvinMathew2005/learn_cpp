#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

void inputMatrix(int matrix[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
}

void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
}

void displayMatrix(int matrix[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}

void main() {
 // Clear the screen
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS], rows, cols;

    cout << "Enter number of rows and columns (max 10): ";
    cin >> rows >> cols;

    // Ensure rows and cols do not exceed defined limits
    if (rows > ROWS || cols > COLS) {
        cout << "Error: Maximum size is " << ROWS << "x" << COLS << ".\n";
        return ;
    }

    cout << "Input first matrix:\n";
    inputMatrix(matrix1, rows, cols);

    cout << "Input second matrix:\n";
    inputMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, result, rows, cols);

    cout << "Resultant matrix after addition:\n";
    displayMatrix(result, rows, cols);
    // Wait for a key press
}
