#include<iostream>
#include<windows.h>
using namespace std;

void reverse(string condition);

main()
{
  string condition;
  while(true)
 {
  cout<<"ENTER THE CONDITION: ";
  cin>>condition;
  reverse(condition);
 }

}

void reverse(string condition)
{
  if(condition == "true")
  {
    cout<<"FALSE"<<endl; 
  }

  if(condition == "false")
  {
    cout<<"TRUE"<<endl;  
  }

}