#include<iostream>
using namespace std;

float fruitPrice(string fruit, string day, float quantity);


main()
{
 
	string fruit, day;	
	float quantity;
        float output;
	
	cout<<"ENTER FRUIT NAME: ";
	cin>>fruit;
	cout<<"ENTER THE DAY OF THE WEEK: ";
	cin>>day;
	cout<<"ENTER THE QUANTITY: ";
	cin>>quantity;
 
      	output= fruitPrice(fruit, day, quantity);
        cout<<"PRICE IS: "<<output;

}

float fruitPrice(string fruit, string day, float quantity)
{
        float price;

	if(fruit=="banana" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
	{
	   price= 2.50 * quantity;	
	} 

	else if(fruit=="apple" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
	{
	   price= 1.20 * quantity;	
	} 

	else if(fruit=="orange" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
	{
	   price= 0.85 * quantity;	
	} 

	else if(fruit=="grapefruit" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
	{
	   price= 1.45 * quantity;	
	} 

	else if(fruit=="kiwi" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
	{
	   price= 2.70 * quantity;	
	} 

	else if(fruit=="pineapple" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
	{
	   price= 5.50 * quantity;	
	} 

	else if(fruit=="grapes" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
	{
	   price= 3.85 * quantity;	
	} 

	else if(fruit=="banana" && (day=="saturday" || day=="sunday"))
	{
	   price= 2.70 * quantity;	
	}

	else if(fruit=="apple" && (day=="saturday" || day=="sunday"))
	{
	   price= 1.25 * quantity;	
	} 

	else if(fruit=="orange" && (day=="saturday" || day=="sunday"))
	{
	   price= 0.90 * quantity;	
	}

	else if(fruit=="grapefruit" && (day=="saturday" || day=="sunday"))
	{
	   price= 1.60 * quantity;	
	}

	else if(fruit=="kiwi" && (day=="saturday" || day=="sunday"))
	{
	   price= 3.00 * quantity;	
	}

	else if(fruit=="pineapple" && (day=="saturday" || day=="sunday"))
	{
	   price= 5.60 * quantity;	
	}

	else if(fruit=="grapes" && (day=="saturday" || day=="sunday"))
	{
	   price= 4.20 * quantity;	
	}

	else
	{
		cout<<"error";
	}

       return price;
}
