#include<iostream>
using namespace std;

// Functions are set of code which performs something for you
// or used to modularise code or used to increase readability or used to use same code multiple times
// void -> which does not returns anything
// return
// parameterized
// non parameterized

// void printname(string name){
// cout <<"hey " << name <<endl;
// }
// int main(){
//     string name;
//     cin >> name;
//     printname(name);

    

//     // ......take two numbers and print its sum.........
// //....... like a calculater........ 
// int sum(int num1,int num2){
//     int num3 =  num1 + num2;
//     return num3;
// }

// int main(){
// int num1,num2;
// cin >>  num1 >> num2;
// int res = sum(num1, num2);
// cout << res;



// // .......pass by value.........
// void dosomthing(int num){
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
    
// }
// int main(){
// //     int num = 10;
// //     dosomthing(num);
// //     cout << num << endl;

// // .........................................
// void dosomthing(string s){
//     s[0] = 't';
//     cout << s <<endl;
// }
// int main(){
//     string s = "raj";
//     dosomthing(s);
//     cout << s << endl;


// ......pass by reference........
void dosomthing(string &s){
    s[0] = 't';
    cout << s <<endl;
}
int main(){
    string s = "raj";
    dosomthing(s);
    cout << s << endl;

    
    return 0;
}