#include<iostream>
using namespace std;

int digitSum(int number);

main()
{
	int number;
	int output;
	
	cout<<"ENTER THE NUMBER: ";	
	cin>>number;
	
	output= digitSum(number);
	cout<<output;

}

int digitSum(int number)
{
	
	int quotient;
	int remainder;
	int sum=0;
	int counter=0;

	while (number>0)
	{
		quotient= number / 10;
		remainder= number % 10;
		
		
		sum= sum + remainder;
		
		counter++;
		number=quotient;	

	}
	return sum;

}