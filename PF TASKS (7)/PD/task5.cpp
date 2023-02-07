#include<iostream>
using namespace std;

int sequence(int num);

main()
{
    int num;
    int output;
    cout<<"ENTER THE SQUENCE: ";
    cin>>num;

    output=sequence(num);
    cout<<output;

}

int sequence(int num)
{
    int num1=0;
    int num2=1;
    int sum=0;

    for(int count=1;count<=num;count++)
    {
        sum=num1+num2;
        num1=sum;
        num2++;
    }
    return sum;
}