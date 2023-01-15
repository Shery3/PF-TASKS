#include<iostream>
#include<windows.h>
using namespace std;

int add(int number1, int number2);
float division(float number1, float number2);
int maximum(int number1, int number2);

main()
{
  int number1;
  int number2;
  int total;
  float dtotal;
  int max;
  cout<<"ENTER FIRST NUMBER: ";
  cin>>number1;
  cout<<"ENTER SECOND NUMBER: ";
  cin>>number2;
  total= add(number1,number2);
  cout<<"SUM IS: "<<total<<endl;
  dtotal= division(number1, number2);
  cout<<"DIVISION IS: "<<dtotal<<endl;
  max=maximum(number1,number2);
  cout<<max<<" IS GREATER.."<<endl;
}


int add(int number1, int number2)
{

   int sum;
   sum= number1 + number2;
   return sum;

}

float division(float number1, float number2)
{
   float divide;
   divide= number1/number2;
   return divide;

}


int maximum(int number1, int number2)
{
   if (number1 > number2)
    {
      return number1;
       
    }
   if(number2 > number1)
    {
     return number2; 
     
    }
    return 0;    
}
