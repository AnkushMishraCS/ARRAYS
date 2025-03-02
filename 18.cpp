#include <iostream>
using namespace std;

#define R 3
#define C 3

void searchSnake(int arr[R][C], int target) {
    for (int i = 0; i < R; i++) {
        for (int j = (i % 2 == 0) ? 0 : C - 1; (i % 2 == 0) ? (j < C) : (j >= 0); j += (i % 2 == 0) ? 1 : -1) {
            if (arr[i][j] == target) {
                cout << "Found at (" << i << ", " << j << ")\n";
                return;
            }
        }
    }
    cout << "Not found\n";
}

int main() {
    int arr[R][C] = {{1, 2, 3}, {6, 5, 4}, {7, 8, 9}}, target;
    cout << "Enter element to search: ";
    cin >> target;
    searchSnake(arr, target);
    return 0;
}
