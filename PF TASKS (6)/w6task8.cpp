#include<iostream>
using namespace std;

float budget(int range, string category, int nPeople);

main()
{
   int range;
   string category;
   int nPeople;
   float output;
   
   cout<<"ENTER THE RANGE[1000.00 ... 1 000 000.00]: ";
   cin>>range;
   cout<<"ENTER THE CATEGORY: ";
   cin >>category;
   cout<<"ENTER THE NUMBER OF PEOPLE IN GROUP: ";
   cin>>nPeople;
    
   output= budget(range, category, nPeople);

   if(output>0)
   {
   cout<<"YOU HAVE "<<output<<" LEVA LEFT.";
   }

   else if(output<0)
   {
     output= -(output);
    cout<<"NOT ENOUGH MONEY!YOU NEED "<<output <<" LEVA.";
   }


}

float budget(int range, string category, int nPeople)
{    
    float result;
    float price;
    float finalPrice;
    float vipTicket=499.99;
    float normalTicket=249.99;

   if(category=="VIP" && (nPeople>=1 && nPeople<=4))
   {  
     result=(range * 75)/100;
     price=range-result;
     finalPrice= price-(nPeople * vipTicket);
     
   }

   else if(category=="VIP" && (nPeople>=5 && nPeople<=9))
   {
    
     result=(range * 60)/100;
     price=range-result;
     finalPrice=price-(nPeople * vipTicket);
   }

   else if(category=="VIP" && (nPeople>=10 && nPeople<=24))
   {
    
     result=(range * 50)/100;
     price=range-result;
     finalPrice=price-(nPeople * vipTicket);
   }

   else if(category=="VIP" && (nPeople>=25 && nPeople<=49))
   {
    
     result=(range * 40)/100;
    
     price=range-result;
     
     finalPrice=price-(nPeople * vipTicket);
   }

   else if(category=="VIP" && (nPeople>=50 && nPeople<=200))
   {
         result=(range * 25)/100;
     price=range-result;
     finalPrice=price-(nPeople * vipTicket);
   }




   if(category=="normal" && (nPeople>=1 && nPeople<=4))
   {
     result=(range * 75)/100;
     price=range-result;
     finalPrice= price-(nPeople * normalTicket);
     
   }

   else if(category=="normal" && (nPeople>=5 && nPeople<=9))
   {
     result=(range * 60)/100;
     price=range-result;
     finalPrice=price-(nPeople * normalTicket);
   }

   else if(category=="normal" && (nPeople>=10 && nPeople<=24))
   {
     result=(range * 50)/100;
     price=range-result;
     finalPrice=price-(nPeople * normalTicket);
   }

   else if(category=="normal" && (nPeople>=25 && nPeople<=49))
   {
     result=(range * 40)/100;
     price=range-result;
     finalPrice=price-(nPeople * normalTicket);
   }

   else if(category=="normal" && (nPeople>=50 && nPeople<=200))
   {
     result=(range * 25)/100;
     price=range-result;
     finalPrice=price-(nPeople * normalTicket);
   }
   return finalPrice;
}