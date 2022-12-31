#include<iostream>
using namespace std;
void isEligible(int age);


main(){

     int age;
while(true)
{
     cout<<"ENTER YOUR AGE: ";
     cin>>age;
     isEligible(age);
}
}

void isEligible(int age){

 if(age >= 18)
   {
    cout<<"YOU ARE ELIGIBLE.. "<<endl;
   }
 if(age < 18)
   {
    cout<<"YOU ARE NOT ELIGIBLE.."<<endl;;
   }





}