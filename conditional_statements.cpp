#include<iostream>
using namespace std;
int main(){

// write a program that takes an input of a age 
// and print if you are adult or not

int age;
cout<<"enter the age:";
cin >> age;
if (age >= 18){
    cout<< "adult!" ;
   }
  else if (age >= 10){
    cout<< "not adult!" ;
   }
else {
      cout<< " child!";
      }
return 0;
}