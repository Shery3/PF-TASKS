#include<iostream>
using namespace std;

main()
{       
    int size;
   
    bool flag= false;
    cout<<"ENTER THE SIZE: ";
    cin>>size;
    int arr[size];

    for(int idx=0; idx<size; idx++)
    {
        cout<<"ENTER THE ELEMENTS: ";
        cin>>arr[idx];

    }
    int number;
    cout<<"ENTER YOUR NUMBER: ";
    cin>>number;

    for(int idx=0; idx<size;idx++)
    {
        if(arr[idx]==number)
        {
            flag= true;
        }
    }
    if(flag==true)
    {
        cout<<"ALREADY EXISTS..";
    }
    else
    {
        cout<<"DOES NOT EXISTS..";
    }
}