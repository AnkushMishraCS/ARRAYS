#include <iostream>

using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 8, 3},
        {4, 5, 9},
        {7, 2, 6}
    };

    int maxElement = matrix[0][0];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] > maxElement)
                maxElement = matrix[i][j];

    cout << "Largest element in the matrix: " << maxElement << endl;

    return 0;
}
