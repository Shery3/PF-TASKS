#include<iostream>
using namespace std;

main()
{
    float arr[4];
    cout<<"ENTER THE CHANGE IN QUARTERS: ";
    cin>>arr[0];
    cout<<"ENTER THE CHANGE IN DIMES: ";
    cin>>arr[1];
    cout<<"ENTER THE CHANGE IN NICKELS: ";
    cin>>arr[2];
    cout<<"ENTER THE CHANGE IN PENNIES: ";
    cin>>arr[3];

    float totalDue;
    cout<<"TOTAL DUE IS: ";
    cin>>totalDue;

    float quarters=arr[0] * 0.25;
    float dimes=arr[1] * 0.10;
    float nickels=arr[2] * 0.05;
    float pennies=arr[3] * 0.01;

    int result= quarters + dimes + nickels + pennies;

    if(result >= totalDue)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
}