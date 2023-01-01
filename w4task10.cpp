#include<iostream>
#include<windows.h>
using namespace std;

void priceTicket(string countryName, int ticketPrice, int finalPrice);

main()
{
  string countryName;
  int ticketPrice;
  int finalPrice;
  while(true)
  {
  cout<<"ENTER COUNTRY NAME: ";
  cin>>countryName;
  cout<<"ENTER YOUR TICKET PRICE: ";
  cin>>ticketPrice;
  priceTicket(countryName, ticketPrice, finalPrice);
  }
}

void priceTicket(string countryName, int ticketPrice, int finalPrice)
{
  int discount;
  if(countryName== "Pakistan")
  {
   discount= ticketPrice * 0.05;
   finalPrice=ticketPrice - discount;  
   cout<<"YOUR FINAL PRICE IS: "<<finalPrice<<endl;
  }
  if(countryName== "Ireland")
  {
   discount= ticketPrice * 0.10;
   finalPrice=ticketPrice - discount;
   cout<<"YOUR FINAL PRICE IS: "<<finalPrice<<endl;
  }
  if(countryName== "India")
  {
   discount= ticketPrice * 0.20;
   finalPrice=ticketPrice - discount;
   cout<<"YOUR FINAL PRICE IS: "<<finalPrice<<endl;
  }
  if(countryName== "England")
  {
   discount= ticketPrice * 0.30;
   finalPrice=ticketPrice - discount;
   cout<<"YOUR FINAL PRICE IS: "<<finalPrice<<endl;
  }
  if(countryName== "Canada")
  {
   discount= ticketPrice * 0.5;
   finalPrice=ticketPrice - discount;
   cout<<"YOUR FINAL PRICE IS: "<<finalPrice<<endl;
  }
}