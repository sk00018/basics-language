#include<iostream>
using namespace std;

// Functions are set of code which performs something for you
// or used to modularise code or used to increase readability or used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised


void printname(string name){
cout <<"hey " << name <<endl;
}
int main(){
    string name;
    cin >> name;
    printname(name);

    
    return 0;
}