#include <iostream>

using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    bool isSymmetric = true;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }

    if (isSymmetric)
        cout << "The matrix is symmetric." << endl;
    else
        cout << "The matrix is not symmetric." << endl;

    return 0;
}
