#include<iostream>
using namespace std;

float apartmentPrice(string month, int stays);
float studioPrice(string month, int stays);

main()
{
	string month;
	int stays;
	float output1;	
	float output2;
	float final1;
	float final2;
	float final3;
	float final4;
	
	cout<<"ENTER THE MONTH: ";
	cin>>month;
	cout<<"ENTER NUMBER OF STAYS[0...200]: ";
	cin>>stays;
		
	output1= apartmentPrice(month, stays);
	if(stays>14)	
	{
		final1=output1 * 0.10;
		final2=output1-final1;
		cout<<"APARTMENT: "<<final2<<"$"<<endl;
		
	}
	else
	{
		cout<<"APARTMENT: "<<output1<<"$"<<endl;
	}
	
	
	output2= studioPrice(month, stays);
	if((month=="may") || (month=="october"))
	{
		if(stays>7 && stays<14)
		{
			final3= output2 * 0.05;
			final4= output2-final3;	
			cout<<"STUDIO: "<<"$"<<final4;
		}
		else if(stays>14)
		{
			final3= output2 * 0.30;	
			final4= output2-final3;
			cout<<"STUDIO: "<<"$"<<final4;
		}

	}

	else if((month=="july") || (month=="august"))
	{
		cout<<"STUDIO: "<<"$"<<output2;	
	}

	else if((month=="june") || (month=="september"))
	{
		if(stays>14)
		{
			final3= output2 * 0.20;	
			final4= output2-final3;
			cout<<"STUDIO: "<<"$"<<final4;
		}
		
		else
		{
			cout<<"STUDIO: "<<"$"<<output2;
		}
	}
	


}

float apartmentPrice(string month, int stays)
{
	float price;

	if((month=="may") || (month=="october"))
	{
		price=65 * stays;
	}

	else if((month=="june") || (month=="september"))
	{
		price=68.70 * stays;
	}

	else if((month=="july") || (month=="august"))
	{
		price=77 * stays;
	}

	return price;
}

float studioPrice(string month, int stays)
{	
	float price1;
	float price2;

	if((month=="may") || (month=="october"))
	{
		price1=50 * stays;
		
	}

	else if((month=="june") || (month=="september"))
	{
		price1=75.20 * stays;

	}

	else if((month=="july") || (month=="august"))
	{
		price1=76 * stays;
	}

	return price1;
}