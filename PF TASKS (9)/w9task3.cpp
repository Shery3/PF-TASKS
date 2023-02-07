#include<iostream>
using namespace std;

main()
{       
    int size;
    int sum=0;
    int avg=0;
    cout<<"ENTER THE SIZE: ";
    cin>>size;
    int arr[size];

    for(int idx=0; idx<size; idx++)
    {
        cout<<"ENTER THE ELEMENTS: ";
        cin>>arr[idx];

    }

    for(int idx=0 ; idx<size ; idx++)
    {
        sum= sum + arr[idx];
    }
    cout<<"SUM IS: "<<sum<<endl;
    avg= sum/size;
    cout<<"AVERAGE IS: "<<avg;
}