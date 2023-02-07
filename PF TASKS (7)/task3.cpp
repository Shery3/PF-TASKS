#include<iostream>
using namespace std;

int frequencyChecker(int number, int digit);

main()
{   
    int number;
    int digit;
    int output;

    cout<<"ENTER THE NUMBER: ";
    cin>>number;
    cout<<"ENTER THE DIGIT: ";
    cin>>digit;

    output= frequencyChecker(number, digit);
    cout<<"NUMBER OF DIGITS: "<<output;
}

int frequencyChecker(int number, int digit)
{   int quotient;
    int remainder;
    int counter=0;

    
    while(number>0)
    {
        quotient=number / 10;
        remainder=number % 10;

        if(remainder == digit)
        {
            counter++;
        }
        number=quotient;
    }
        return counter;
}