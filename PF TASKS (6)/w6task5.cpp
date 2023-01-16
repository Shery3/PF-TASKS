#include<iostream>
using namespace std;

float totalIncome(string screening, int rows, int columns);

main()
{
   string screening;
   int rows;
   int columns;
   float output;
   
   cout<<"ENTER SCREENING: ";
   cin>>screening;
   cout<<"ENTER NUMBER OF ROWS: ";
   cin>>rows;
   cout<<"ENTER THE NUMBER OF COLUMNS: ";
   cin>>columns;
  
   output= totalIncome(screening, rows, columns);
   cout<<"YOUR TOTAL INCOME IS: "<<output; 

}

float totalIncome(string screening, int rows, int columns)
{
    float result;

    if(screening == "premiere")
    {
      result= 12 * rows * columns; 

    }   

    else if(screening == "normal")
    {
      result= 7.50 * rows * columns; 

    }   

    else if(screening== "discount")
    {
      result= 5 * rows * columns; 

    }   
    
    return result;

}