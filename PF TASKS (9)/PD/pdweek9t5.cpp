#include<iostream>
using namespace std;

main()
{
    
    string arr[4];

    for (int idx = 0; idx < 4; idx++)
    {
        cout << "ENTER THE ELEMENTS: ";
        cin >> arr[idx];

    }

    string var=arr[0];
    bool flag= false;

    for(int idx=0; idx<4;idx++)
    {   
        if(arr[idx]==var)
        {
            flag=true;
        }
       
    }
    if(flag==true)
    {
        cout<<"IDENTICAL..";
    }
    
}
