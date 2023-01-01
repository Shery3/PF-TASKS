#include<iostream>
#include<windows.h>
using namespace std;

void isEqual(int number1, int number2);


main()
{
  int number1;
  int number2;
  cout<<"ENTER FIRST INTEGERS: ";
  cin>>number1;  

  cout<<"ENTER SECOND INTEGERS: ";
  cin>>number2; 
  isEqual(number1, number2);

}

void isEqual(int number1, int number2)
{
  if(number1==number2)
  {
   cout<<"TRUE"<<endl;
  }

  if(number1!=number2)
  {
   cout<<"FALSE"<<endl;
  }
}
