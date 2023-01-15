#include <iostream>
using namespace std;

float taxCalculator(char type,float price);

main()

{

  char type;
  float price;
  float result;

 cout << "ENTER YOUR VEHICLE PRICE = ";
 cin >> price;
 cout << "ENTER YOUR VEHICLE CODE = ";
 cin >> type;

 result =  taxCalculator(type,price);

	if ( type == 'M')
	{ 
		cout << "The final price on the vehicle of Motorcycle after adding the tax is " << result; 
	}

  	if ( type == 'E')
	{ 
		cout << "The final price on the vehicle of Electric after adding the tax is " << result; 
	}

  	if ( type == 'S')
	{ 
		cout << "The final price on the vehicle of Sedan after adding the tax is " << result; 
	}

  	if ( type == 'V')
	{
		cout << "The final price on the vehicle of Van after adding the tax is " << result ; 
	}

  	if ( type == 'T')
	{  
		cout << "The final price on the vehicle of Truck after adding the tax is " << result; 
	}



}


float taxCalculator(char type,float price)
{
  float taxamount;
  float finalprice;


	if ( type == 'M')
	{

 		taxamount = price*0.06;
 		finalprice = price + taxamount;
 		return finalprice;

	}


	if ( type == 'E')
	{

 		taxamount = price*0.08;
 		finalprice = price + taxamount;
 		return finalprice;

	}

	if ( type == 'S')
	{

 		taxamount = price*0.1;
 		finalprice = price + taxamount;
	 	return finalprice;

	}

	if ( type == 'V')
	{

 		taxamount = price*0.12;
 		finalprice = price + taxamount;
 		return finalprice;

	}

	if ( type == 'T')
	{

 		taxamount = price*0.15;
 		finalprice = price + taxamount;
 		return finalprice;

	}



}
