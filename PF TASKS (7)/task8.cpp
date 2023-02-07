#include<iostream>
using namespace std;

float calculateMoney(int age, int price, int toyprice);


main()
{

	int age;
	int price;
	int toyprice;
	int output;

	cout<<"ENTER YOUR AGE[1 ... 77]: ";
	cin>>age;
	cout<<"ENTER THE PRICE OF WASHING MACHINE[1.00 ... 10 000.00]: ";
	cin>>price;
	cout<<"ENTER THE PRICE OF TOYS[0 ... 40]: ";
	cin>>toyprice;

	output= calculateMoney(age, price, toyprice);
	
	
	if(output>0)
	{
		cout<<"YES!!"<<endl<<output;
	}

	if(output<0)
	{
		cout<<"NO!!"<<endl<<output;
	}

}

float calculateMoney(int age, int price, int toyprice)
{	
	
	int even;
	int odd;
	int emoney;
 	int omoney;
	int total;
	int result;
	
	for(int num=1; num<=age; num++)
	{

		if(age % 2==0)
		{
			even=age/2;
			odd=even;
			money=money+(num+10);
				
		}

		else if(age % 2!=0)
		{
			odd=(age/2)+1;
			even=age/2;
		}	

}	
	emoney=(even*10)-even;
	omoney=(toyprice*odd);
	result=emoney+omoney;
	total= price- result;

	return total;	
	cout<<total;
}