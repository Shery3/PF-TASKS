#include<iostream>
using namespace std;

main()
{
    string movies[5]={"gladiator","starwars","terminator","talkinglives","tombraider"};
    int price=500;

    string movieName;
    

    cout<<"ENTER THE MOVIE NAME: ";
    cin>>movieName;
    int result;
    int index=-1;
    for(int idx=0 ; idx<5; idx++)
    {
        if(movieName==movies[idx])
        {
            index=idx;
        }
    }

    if(index%2==0)
    {
        result=price *0.10;
    }
    else if(index%2!=0)
    {
        result=price *0.5;
    }
    cout<<result;

   
}
