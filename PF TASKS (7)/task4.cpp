#include<iostream>
using namespace std;



main()
{
	int num;
	cout<<"ENTER THE NUMBER: ";
	cin>>num;


	for(int count=1; count<=10; count++)
	{		
		int result;
		result=num * count;
		cout<<num<<" * "<<count<<"= "<<result<<endl;
	}

}