#include <iostream>
using namespace std;


float p1=0;
float p2=0;
float p3=0;
float per1=0;
float per2=0;
float per3=0;
main()
{
    float number;
    int range;
    float finalvalue;
    cout << "ENTER COUNT OF NUMBERS: ";
    cin >> number;
    for(int count = 1;count <= number ; count++)
    {
       cout<<"ENTER THE RANGE: "; 	
       cin >> range;

    if (range % 2 == 0)
    {
        p1 = p1+1;
        per1 = (p1/number)*100;
    }

    if (range % 3 == 0)
    {
        p2=p2+1;
        per2 = (p2/number)*100;
    }

    if(range % 4 == 0)
    {
        p3=p3+1;
        per3 = (p3/number)*100;
    }
    
    

    }
        cout << per1 << "%" << endl;
        cout << per2 << "%" << endl;
        cout << per3 << "%" << endl;
        
}