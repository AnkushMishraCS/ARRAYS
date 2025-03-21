#include <iostream>

using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;

    for (int i = 0; i < 3; i++)
        sum += matrix[i][i] + matrix[i][2 - i];

    if (3 % 2 == 1)
        sum -= matrix[1][1];

    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
