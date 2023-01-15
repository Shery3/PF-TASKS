#include <iostream>
using namespace std;

void oddish(int add);
void evenish(int add);

main()

{

int num;
int r1;
int r2;
int r3;
int r4;
int q1;
int q2;
int q3;
int q4;
int add;

cout << "Enter your number = ";
cin >> num;

r1= num % 10;
q1 = num/ 10;
r2 = q1 % 10;
q2 = q1 / 10;
r3 = q2 % 10 ;
q3 = q2 / 10;
r4 = q3 % 10;
q4 = q3 / 10;

add = r1+ r2 + r3+ r4 + q4;

 oddish(add);
 evenish(add);




}



void oddish(int add)

{

if(add % 2 != 0)

{ cout << "Oddish"; }


}

void evenish(int add)

{

if (add % 2 == 0 )

{ cout << "Evenish"; }


}








