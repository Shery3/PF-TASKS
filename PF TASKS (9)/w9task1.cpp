#include<iostream>
using namespace std;

main()
{       
    int size;
    int sum=0;
    cout<<"ENTER THE SIZE: ";
    cin>>size;
    int arr[size];

    for(int idx=0; idx<size; idx++)
    {
        cout<<"ENTER THE ELEMENTS: ";
        cin>>arr[idx];

        sum=sum+arr[idx];
    }
    cout<<"SUM IS: "<<sum;
}