#include <iostream>

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
