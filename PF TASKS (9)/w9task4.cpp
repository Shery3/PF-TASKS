#include<iostream>
using namespace std;

main()
{       
    int size;
 
    cout<<"ENTER THE SIZE: ";
    cin>>size;
    int arr[size];

    for(int idx=0; idx<size; idx++)
    {
        cout<<"ENTER THE ELEMENTS: ";
        cin>>arr[idx];

    }

    for(int idx= size-1; idx>=0 ; idx--)
    {
        cout<<arr[idx]<<" ";
    }
}