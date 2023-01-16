#include<iostream>
using namespace std;

float lowestPrice(int nKilometers, string period);

main()
{
   string period;
   int nKilometers;
   float output;
   
   cout<<"ENTER NUMBER OF KILOMETERS: ";
   cin>>nKilometers;
   cout<<"ENTER THE PERIOD OF DAY: ";
   cin>>period;
  
   output= lowestPrice(nKilometers,period);
   cout<<"YOUR TOTAL INCOME IS: "<<output; 

}

float lowestPrice(int nKilometers, string period)
{
    float result;
    
    

    if(nKilometers < 20 && period== "day")
    {
    
      result= (0.79 * nKilometers) + 0.70 ; 

    }   

    else if(nKilometers < 20 && period== "night")
    {
      result= (0.90 * nKilometers) + 0.70 ; 

    }   
  

     else if(nKilometers >= 20)
    {
      result= 0.09 * nKilometers ; 

    }  
 
     else if(nKilometers >= 100)
    {
      result= 0.06 * nKilometers ; 

    } 
    
    return result;

}