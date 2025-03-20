#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int matrix[3][3] = {
        {9, 2, 7},
        {4, 1, 8},
        {6, 3, 5}
    };

    int arr[9], k = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            arr[k++] = matrix[i][j];

    sort(arr, arr + 9);

    k = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = arr[k++];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
