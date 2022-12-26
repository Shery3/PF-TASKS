#include <iostream>
using namespace std;

main()

{


int digit1;
int digit2;
int digit3;
int digit4;
int digit5;
int digit6;
int digit7;
int digit8;
int digit9;
int digit10;
int digit11;
int digit12;
int digit13;
int digit14;
int digit15;
int add;
int multiply;
int subtract;
int conversion;


cout << " Enter 1st number: ";
cin >>digit1;
cout << "Enter 2nd number: " ;
cin >> digit2;
cout << "Enter 3rd number: " ;
cin >> digit3;
cout << "Enter 4th number: " ;
cin >> digit4;
cout << "Enter 5th number: ";
cin >> digit5;
cout << "Enter 6th number: ";
cin >> digit6;
cout << "Enter 7th number: ";
cin >> digit7;
cout << "Enter 8th number: ";
cin >> digit8;
cout << "Enter 9th number: ";
cin >> digit9;
cout << "Enter 10th number: ";
cin >> digit10;
cout << "Enter 11th number: ";
cin >> digit11;
cout << "Enter 12th number: ";
cin >> digit12;
cout << "Enter 13th number: ";
cin >> digit13;
cout << "Enter 14th number: ";
cin >> digit14;
cout << "Enter 15th number: ";
cin >> digit15;


add = digit1 + digit2 + digit3 + digit4 + digit5;
multiply = digit6*digit7*digit8*digit9*digit10;
subtract = digit11 - digit12 - digit13 - digit14 - digit15;

conversion = (add + multiply)-subtract;


cout << "Result: ";
cout << conversion;


}