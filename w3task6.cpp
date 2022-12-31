#include<iostream>
using namespace std;
void greaterNumber(int firstNumber, int secondNumber);

main(){

int number1;
int number2;
while(true){
cout<<"ENTER YOUR FIRST NUMBER: ";
cin>>number1;
cout<<"ENTER YOUR SECOND NUMBER: ";
cin>>number2;
greaterNumber(number1,number2);

}


}


void greaterNumber(int firstNumber, int secondNumber){

    if(firstNumber>secondNumber)
     {
      cout<<"FIRST NUMBER IS GREATER.."<<endl;


}
    if(secondNumber>firstNumber)
      {
       cout<<"SECOND NUMBER IS GREATER.."<<endl;


}


}
