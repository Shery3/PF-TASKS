#include<iostream>
using namespace std;

string checkTitle(char gender, int age);

main()
{
  char gender;
  int age;
  string output;
  cout<<"ENTER YOUR GENDER: ";
  cin>>gender;
  cout<<"ENTER YOUR AGE: ";
  cin>>age;
  
  output= checkTitle(gender, age);
  cout<< "YOUR OUTPUT IS: "<<output;

}




string checkTitle(char gender, int age)
{
    string result;

    if(gender== 'm' && age>=16)
    {
        result="Mr";
 
    }

    if(gender== 'm' && age<=16)
    {
       result="Master"; 

    }
  
    if(gender== 'f' && age>=16)
    {
         result="Mrs";

    }
 
    if(gender== 'f' && age<=16)  
    {
       result="Miss";
   
    }
    return result;

}