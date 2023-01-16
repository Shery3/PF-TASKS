#include<iostream>
using namespace std;

bool greaterNumber(int num1, int num2, int num3);

main()
{
   int num1, num2, num3;
   bool result;
   cout<<"ENTER NUM 1: ";
   cin>>num1;
   cout<<"ENTER NUM 2: ";
   cin>>num2;
   cout<<"ENTER NUM 3: ";
   cin>>num3;
   
   result= greaterNumber(num1,num2,num3);
   cout<<result;

}

bool greaterNumber(int num1, int num2, int num3)
{
   if((num1==num2) && (num2==num3) && (num3==num1))
   {
     return true;
   
   }
 
   else
   {
      return false;
   }

}