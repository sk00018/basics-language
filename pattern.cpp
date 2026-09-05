#include<iostream>
using namespace std;
int main(){

// Pattern 1: square_star_pattern   
//     int n = 5;
//     for(int i = 1; i <=n; i++){
//        for(int j = 1; j <=n; j++){ 
//           cout << "*";
//     }
//     cout << endl;
// }



// Pattern 1: Increasing triangle star pattern

    // cout << "Pattern 2:\n";

    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }



// // Pattern 3: Number triangle pattern   
//     int n = 5;
//     for(int i = 1; i <=n; i++){
//        for(int j = 1; j <=i; j++){ 
//           cout << j;
//     }
//     cout << endl;
// }




// // Pattern 4: Decreasing_Star_Pattern   
//     int n = 5;

//     for(int i = n; i >=1; i--){
//        for(int j = 1; j <=i; j++){ 
//           cout << "*";
//     }
//     cout << endl;
// }



// // Pattern 5: Reverse Number triangle pattern   
//     int n = 5;
//     for(int i = n; i >= 1; i--){
//        for(int j = 1; j <=i; j++){ 
//           cout << j;
//     }
//     cout << endl;
// }



// // Pattern 6: Repeated Number pattern   
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//        for(int j = 1; j <=i; j++){ 
//           cout << i;
//     }
//     cout << endl;
// }




 
//  // Pattern 6:Star Pyramid Pattern
//    int n = 5;

//     for (int i = 1; i <= n; i++) {

//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }




// // Pattern 7:Reverse Pyramid Pattern

//     int n = 9;

//     for (int i = n; i >= 1; i -= 2) {
//         // Spaces
//         for (int j = 0; j < (n - i) / 2; j++) {
//             cout << " ";
//         }

//         // Stars
//         for (int j = 0; j < i; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }



// // Pattern 8:Diamond star Pattern

//     int n = 5;

//     // Upper half
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     // Lower half
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }




// pattern 9: Star trangle pattern
    int n = 5;

    // Increasing pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Decreasing pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }



return 0;
}





