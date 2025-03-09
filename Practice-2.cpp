#include <iostream>
using namespace std;

int main() {
    int n = 3, m = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    int maxSum = 0;
    
    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += arr[i][j];
            colSum += arr[j][i];
        }
        maxSum = max(maxSum, max(rowSum, colSum));
    }

    cout << "Maximum sum of any row or column: " << maxSum << endl;
    return 0;
}
