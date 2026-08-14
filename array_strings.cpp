


#include <iostream>
using namespace std;

int main() {
    // ........1D ARRAY..........
    int arr[5];

    // Input
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Output
    cout << "The numbers are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}