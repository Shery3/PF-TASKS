#include<iostream>
using namespace std;

float checkCost(string city, string product, int quantity);



main()
{
  string city;
  string product;
  int quantity;
  float cost;

  cout<<"ENTER THE CITY: ";
  cin>>city; 
  cout<<"ENTER THE PRODUCT: ";
  cin>>product;
  cout<<"ENTER THE QUANTITY: ";
  cin>>quantity;

  cost= checkCost(city, product,quantity);
  cout<<"COST IS: "<<cost;


}

float checkCost(string city, string product, int quantity)
{
   float result;
   
   
  if(city== "sofia" && product=="coffee")
  {
    
    result= 0.50 * quantity;  
    
  }

  else if(city== "sofia" && product=="water")
  {
    result=0.80 * quantity;
  
  }

  else if(city== "sofia" && product=="beer")
  {
     result=1.20 * quantity;
  }

  else if(city== "sofia" && product=="sweets")
  {
    result=1.45 * quantity;
  }
 
  else if(city== "sofia" && product=="peanuts")
  {
    result=1.60 * quantity;
  }


  if(city== "plovdiv" && product=="coffee")
  {
    
    result= 0.40 * quantity;  
    
  }

  else if(city== "plovdiv" && product=="water")
  {
    result=0.70 * quantity;
  
  }

  else if(city== "plovdiv" && product=="beer")
  {
     result=1.15 * quantity;
  }

  else if(city== "plovdiv" && product=="sweets")
  {
    result=1.30 * quantity;
  }
 
  else if(city== "plovdiv" && product=="peanuts")
  {
    result=1.50 * quantity;
  }


  if(city== "varna" && product=="coffee")
  {
    
    result= 0.45 * quantity;  
    
  }

  else if(city== "varna" && product=="water")
  {
    result=0.70 * quantity;
  
  }

  else if(city== "varna" && product=="beer")
  {
     result=1.10 * quantity;
  }

  else if(city== "varna" && product=="sweets")
  {
    result=1.35 * quantity;
  }
 
  else if(city== "varna" && product=="peanuts")
  {
    result=1.55 * quantity;
  }
  return result;

}