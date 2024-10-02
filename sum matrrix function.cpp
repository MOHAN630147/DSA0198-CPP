#include <iostream>
using namespace std;
void addMatrices(int rows, int cols, int mat1[][10], int mat2[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void addArrays(int size, int arr1[], int arr2[], int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    int mat1[10][10], mat2[10][10], resultMat[10][10];

    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }

    addMatrices(rows, cols, mat1, mat2, resultMat);

    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << resultMat[i][j] << " ";
        }
        cout << endl;
    }

    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int arr1[10], arr2[10], resultArr[10];

    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    addArrays(size, arr1, arr2, resultArr);

    cout << "Sum of the two arrays:\n";
    for (int i = 0; i < size; i++) {
        cout << resultArr[i] << " ";
    }
    cout << endl;

    return 0;
}

