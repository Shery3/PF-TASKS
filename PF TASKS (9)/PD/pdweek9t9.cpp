#include<iostream>
using namespace std;

main()
{
    int pin[4];
    
    string dance[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};

    

    for(int idx=0; idx<4;idx++)
    {
        if(pin[idx]==0)
        {
            cout<<"Shimmy ";
        }
        if(pin[idx]==1)
        {
            cout<<"Shake ";
        }
        if(pin[idx]==2)
        {
            cout<<"Pirouette ";
        }
        if(pin[idx]==3)
        {
            cout<<"Slide ";
        }
        if(pin[idx]==4)
        {
            cout<<"Box Step ";
        }
        if(pin[idx]==5)
        {
            cout<<"Headspin ";
        }
        if(pin[idx]==6)
        {
            cout<<"Dosado ";
        }
        if(pin[idx]==7)
        {
            cout<<"Pop ";
        }
        if(pin[idx]==8)
        {
            cout<<"Lock ";
        }
        if(pin[idx]==9)
        {
            cout<<"Arabesque ";
        }

    }


}