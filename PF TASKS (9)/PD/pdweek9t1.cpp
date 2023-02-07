#include<iostream>
using namespace std;

main()
{
    string fruit[4]={"peach", "apple", "guava", "watermelon"};
    int price[4]={60,70,40,30};
    int quantity;
    int result;
    int totalPrice;
    string fruitVar;

    cout<<"ENTER THE NAME OF THE FRUIT: ";
    cin>>fruitVar;
    cout<<"ENTER THE QUANTITY: ";
    cin>>quantity;

    int index = -1;

    for(int idx=0; idx<4;idx++)
    {
        if(fruitVar==fruit[idx])
        {
            index=idx;
        }
        
    }

    if(index==-1)
    {
        cout<<"FRUIT NOT AVAILABLE..";
    }
    else
    {
        totalPrice=quantity* price[index];
        cout<<"TOTAL BILL IS: "<<totalPrice;
    }
    


}