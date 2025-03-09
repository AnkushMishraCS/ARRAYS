#include <iostream>
using namespace std;

void inputMatrix(int arr[][100], int n) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void printMatrix(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void rotate90Clockwise(int arr[][100], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(arr[i][j], arr[j][i]);

    for (int i = 0; i < n; i++)
        for (int j = 0, k = n - 1; j < k; j++, k--)
            swap(arr[i][j], arr[i][k]);
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int arr[100][100];
    inputMatrix(arr, n);

    cout << "\nOriginal Matrix:\n";
    printMatrix(arr, n);

    rotate90Clockwise(arr, n);

    cout << "\nMatrix after 90-degree rotation:\n";
    printMatrix(arr, n);

    return 0;
}
