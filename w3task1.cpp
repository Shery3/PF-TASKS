#include<iostream>
using namespace std;
void add(int number1, int number2);
void multiplication(int number1, int number2);
void subtraction(int number1, int number2);
main(){
     int num1;
     int num2;
     char operation;
     cout<<"ENTER NUMBER 1: ";
     cin>>num1;
     cout<<"ENTER NUMBER 2: ";
     cin>>num2;
       cout<<"ENTER + - * /: ";
       cin>> operation;
 if(operation == '+')
       {
     
       add(num1,num2);
       }
 if(operation == '-')
    {
     
     subtraction(num1,num2);
  
} 
if(operation == '*')
    {
     
     multiplication(num1,num2);
  
} 

}

void add(int number1, int number2){

     int sum;  
     sum= number1 + number2;
     cout<<"SUM IS: "<<sum <<endl;

}

void multiplication(int number1, int number2){
   
     int mul;
     mul=number1 * number2;
     cout<<"MULTIPLICATION IS: "<<mul<<endl;
    
}
 
void subtraction(int number1, int number2){

    int subtract;
    subtract=number1 - number2;
    cout<<"SUBTRACTION IS: "<<subtract;
}