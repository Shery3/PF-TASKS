#include<iostream>
using namespace std;
void isEven(int number);

main(){

  int number;
while(true){
  cout<<"ENTER YOUR NUMBER: ";
  cin>>number;
  isEven(number);

}

}



void isEven(int number){

  if(number % 2==0)
    {
     cout<<"THE NUMBER IS EVEN.."<<endl;

    }
  if(number % 2!=0)
    {
     cout<<"THE NUMBER IS ODD"<<endl;
    }



}