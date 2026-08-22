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

    cout << "Pattern 2:\n";

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

return 0;
}




