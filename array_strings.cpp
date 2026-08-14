
#include <iostream>
using namespace std;
int main() {

    
//     // ........1D ARRAY..........
//     int arr[5];

//     // Input
//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     // Output
//     cout << "The numbers are: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }



//   int arr[3][5];
//     // ..........2D ARRAY..............
//     // Taking input from user
//     cout << "Enter 15 numbers:" << endl;

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Displaying the 2D array
//     cout << "The 2D array is:" << endl;

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 5; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }



    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;


    return 0;
}


