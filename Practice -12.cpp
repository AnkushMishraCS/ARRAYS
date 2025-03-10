#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++) temp[i] = arr[n - k + i];
    for (int i = n - 1; i >= k; i--) arr[i] = arr[i - k];
    for (int i = 0; i < k; i++) arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;
    rotateArray(arr, n, k);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
