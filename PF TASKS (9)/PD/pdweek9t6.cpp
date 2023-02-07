#include<iostream>
using namespace std;

main()
{
    
    int arr[3];
    int num;
    cout<<"ENTER THE NUMBER: ";
    cin>>num;

    for (int idx = 0; idx < 3; idx++)
    {
        cout << "ENTER THE ELEMENTS: ";
        cin >> arr[idx];

    }

    for (int idx1 = 0; idx1 < num; idx1++)
    {
        for(int idx = 0; idx < 3; idx++)
        {
        if(arr[idx]%2==0)
        {
            arr[idx]=arr[idx]-2;
        }

        else if(arr[idx]%2!=0)
        {
            arr[idx]=arr[idx]+2;
        }
        cout<<arr[idx];
        cout<<endl;
        }

    }


}