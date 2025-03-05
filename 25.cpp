#include <iostream>
using namespace std;

bool spiralSearch(int arr[][4], int rows, int cols, int target) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            if (arr[top][i] == target) return true;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            if (arr[i][right] == target) return true;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                if (arr[bottom][i] == target) return true;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                if (arr[i][left] == target) return true;
            }
            left++;
        }
    }
    
    return false;
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int target = 7;
    if (spiralSearch(arr, 4, 4, target)) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    return 0;
}
