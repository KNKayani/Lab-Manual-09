/*____________________________________________________
Write a C++ program to take inverse of a 3x3 matrix using its determinant and adjoint.
KASHIF NADEEM KAYANI      456466          ME 15 A
*/#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the determinant of a 3x3 matrix
float determinant(float mat[3][3]) {
    return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
           mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
           mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}

// Function to calculate the adjugate (adjoint) of a 3x3 matrix
void adjugate(float mat[3][3], float adj[3][3]) {
    adj[0][0] = mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1];
    adj[0][1] = mat[0][2] * mat[2][1] - mat[0][1] * mat[2][2];
    adj[0][2] = mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1];

    adj[1][0] = mat[1][2] * mat[2][0] - mat[1][0] * mat[2][2];
    adj[1][1] = mat[0][0] * mat[2][2] - mat[0][2] * mat[2][0];
    adj[1][2] = mat[0][2] * mat[1][0] - mat[0][0] * mat[1][2];

    adj[2][0] = mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0];
    adj[2][1] = mat[0][1] * mat[2][0] - mat[0][0] * mat[2][1];
    adj[2][2] = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
}

// Function to find the inverse of a 3x3 matrix
void inverse(float mat[3][3], float inv[3][3]) {
    float det = determinant(mat);

    if (det == 0) {
        cerr << "The matrix is singular. Inverse does not exist." << endl;
        return;
    }

    float adj[3][3];
    adjugate(mat, adj);

    // Calculate the inverse using the formula: inv = adj / det
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            inv[i][j] = adj[i][j] / det;
        }
    }
}

// Function to display a 3x3 matrix
void displayMatrix(float mat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    float matrix[3][3];

    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Matrix[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    float inverseMatrix[3][3];
    inverse(matrix, inverseMatrix);

    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrix);

    cout << "\nInverse Matrix:" << endl;
    displayMatrix(inverseMatrix);

    return 0;
}

