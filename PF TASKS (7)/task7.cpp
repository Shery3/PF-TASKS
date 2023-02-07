#include<iostream>
using namespace std;


int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
	int number1;
	int number2;
	int gcd;
	int lcm;

	cout<<"ENTER NUMBER 1: ";
	cin>>number1;
	cout<<"ENTER THE NUMBER 2: ";
	cin>>number2;

	gcd=calculateGCD(number1, number2);
	cout<<"GCD IS: "<<gcd;
	lcm=(number1 * number2)/gcd;
	cout<<"LCM IS: "<<lcm;
}

int calculateGCD(int number1, int number2)
{
		int gcd;
	for(int count=1; count<=number1 && count<=number2; count++)
	{
		if(number1 % count==0 && number2 % count==0)
		{
			gcd=count;
		}
	}
		return gcd;
}

