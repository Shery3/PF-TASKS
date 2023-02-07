#include <iostream>
using namespace std;

bool isTrue(int number);
main()
{
    int number;
    cout << "ENTER THE NUMBER TO COMPARE: ";
    cin >> number;
    int num;
    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> num;
   
    double arr[num];
    
   

    for (int idx = 0; idx < num; idx++)
    {
        cout << "ENTER THE ELEMENTS: ";
        cin >> arr[idx];
    }


    for(int idx = 0; idx < num; idx++)
    {
        bool boom= isTrue(arr[idx]);
        if(boom==true)
        {
            cout<<"BOOM!!!";
        }
        
        
    }
    // output = isTrue(number);
    // cout << "OUTPUT IS: " << output;
}

bool isTrue(int number)
{
    
    bool answer;
    while (number > 0)
    {
        int quotient = number / 10;

        int remainder = number % 10;

        if (remainder == 7)
        {
            answer = true;
        }

        number = quotient;
    }

    return answer;
}
