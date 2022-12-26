#include <iostream>
using namespace std;

main ()

{


int input;
int remainder1;
int quotient1;
int remainder2;
int quotient2;
int remainder3;
int quotient3;
int remainder4;
int sum;

cout << "Enter a four digit number: ";
cin >> input;
remainder1 = input % 10;
quotient1 = input /10;
remainder2 = quotient1 % 10;
quotient2 = quotient1 /10;
remainder3 = quotient2 % 10;
quotient3 = quotient2 / 10;
remainder4 = quotient3 % 10 ;


sum = remainder1 + remainder2 + remainder3 + remainder4;

cout << "Sum is: ";
cout << sum;

}




