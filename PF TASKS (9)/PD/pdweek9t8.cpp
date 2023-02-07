#include<iostream>
using namespace std;

main()
{
    int num;
    cout<<"ENTER THE NUMBER: ";
    cin>>num;

    string arr[num];

    for(int idx=0; idx<num; idx++)
    {
        cout<<"ENTER THE COLORS: ";
        cin>>arr[idx];
    }

    int result= num * 2;

    int counter=0;

    for(int idx=0; idx<num-1; idx++)
    {
        string var=arr[idx];
        for(int idx=1; idx<num; idx++)
        {
        if(var!=arr[idx])
        {
            counter++;
            break;
        }
        }
    }

    int output=counter+result;
    cout<<"TOTAL TIME IS: "<<output;
}