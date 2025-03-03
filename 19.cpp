#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int rows = 5, cols = 5;
    int arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = (i % 2 == 0) ? j + 1 : cols - j;
        }
    }

    cout << "Spring Pattern 2D Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
