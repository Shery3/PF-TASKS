#include<iostream>
using namespace std;

main()
{
    int num;
    cout<<"ENTER THE LENGTH: ";
    cin>>num;

    int arr1[2];
    int arr2[num];
    int length=sizeof(arr2)/sizeof(arr2[0]);
    int idx=0;
    
    while( idx<num)
    {
        cout<<"ENTER THE ELEMENTS: ";
        cin>>arr2[idx];
        idx++;
        

    }
    for(int idx=0; idx<2;idx++)
    {
        cout<<endl<<"ENTER THE ELEMENTS: ";
        cin>>arr1[idx];
    }
    
     cout<<arr1[0];
     
     for(int idx=0;idx<num;idx++)
    {
        
        cout<<arr2[idx];
       

    }
    
   
     cout<<arr1[1];



}