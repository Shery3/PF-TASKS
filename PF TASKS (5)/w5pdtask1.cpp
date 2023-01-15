#include<iostream>
using namespace std;

int x=10;
void myFunction()
{
  cout<<"THE VALUE OF X IS: "<< x;
  int x=20;


}

main()
{

 myFunction();
 int x=30;
 cout<<"THE VALUE OF X IS: "<< x;
 myFunction();


}