#include<iostream>
using namespace std;

int totalDigits(int number);
main()
{   
    int number;
    int output;
    cout<<"ENTER THE DIGITS: " ;
    cin>>number;

    output= totalDigits(number);
    cout<<"DIGITS: "<<output;


}

int totalDigits(int number)
{
   int counter=0;
   while(number>0)
   {
    number=number/10;
    counter++;
   }
    return counter;

}