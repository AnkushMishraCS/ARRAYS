#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int (*ptr)[3] = &arr; // Pointer to an array

    cout << "First element using (*ptr)[0]: " << (*ptr)[0] << endl;
    cout << "Second element using (*ptr)[1]: " << (*ptr)[1] << endl;

    return 0;
}
