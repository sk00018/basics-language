#include<iostream>
using namespace std;
int main(){

// write a program that takes an input of a age 
// and print if you are adult or not

// int age;
// cout<<"enter the age:";
// cin >> age;
// if (age >= 18){
//     cout<< "adult!" ;
//    }
//   else if (age >= 10){
//     cout<< "not adult!" ;
//    }
// else {
//       cout<< " child!";
//       }


// if (age >= 18){
//     cout<< "Eligible for vote!" ;
//    }
// else {
//       cout<< "Not eligible for vote !";
//       }



// take the age from the user and then decide accordingly.
// 1.)  if age < 18
//    print - not eligible for job.
// 2.)  if age >= 18
//    print -  eligible for job.
// 3.)  if age >= 55 and age <= 57
//    print -  eligible for job, but retirement soon.
// 4.)  if age > 57
//    print -  retirement time.   


// int age;
// cout<<"enter the age:";
// cin >> age;

// if (age < 18){
//       cout <<"not eligible for job:";
// }
//  else if(age <= 54){
//       cout <<"eligible for job:";
// }
//  else if(age <= 57){
//       cout <<"eligible for job but retirement soon:";
// }
//  else  {
//       cout <<"retirement time:";
// }




// take the day no and print the corresponding day.
// 1.)print Monday
// 2.)print Tuesday and so on for 7 print sunday.

int day;
cout << "enter the day:";
cin >> day;

switch (day){
      case 1:
      cout <<"monday";
      break;
      case 2:
      cout <<"tuesday";
      break;
      case 3:
      cout <<"wednesday";
      break;
      case 4:
      cout <<"thrusday";
      break;
      case 5:
      cout <<"friday";
      break;
      case 6:
      cout <<"saturday";
      break;
      case 7:
      cout <<"sunday";
      break;
      default:
       cout <<"invalid";
}
return 0;
}