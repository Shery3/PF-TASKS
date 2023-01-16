#include<iostream>
using namespace std;


void time(int starthour,int arrivalhour,int startmin,int arrivalmin);



main()
{
    int starthour;
    int startmin;
    int arrivalhour;
    int arrivalmin;
    
    
    cout << "Enter the exam starting time (hour) = ";
    cin >> starthour;
    cout<< "Enter the exam starting time (min) = ";
    cin >> startmin;
    cout << "Enter your exam arrival time (hour) = ";
    cin >> arrivalhour;
    cout << "Enter your exam arrival time (min) = ";
    cin >> arrivalmin;
    time( starthour, arrivalhour, startmin, arrivalmin);


    
    
}

void time(int starthour,int arrivalhour,int startmin,int arrivalmin)
{
    int remainingtime;
    starthour=(starthour*60)+ startmin;
    arrivalhour = (arrivalhour*60)+arrivalmin;
    remainingtime = arrivalhour - starthour;



    if(remainingtime < 0)
    {
        remainingtime= remainingtime*-1;
        int newhours;
        int newmins;
        newhours = remainingtime / 60;
        newmins = remainingtime % 60;

        if(newhours == 0 && newmins <= 30)
        {
           cout << "ON TIME" << endl << newmins << " minutes before the class .";
          
        }

         else if((newhours == 0 && newmins > 30)|| (newhours== 0 && newmins >0))
        {
           cout << "EARLY" << endl << newmins << " minutes before the class .";
          
        }

    }

    else if (remainingtime > 0)
    {
        int newhours;
        int newmins;
        newhours = remainingtime / 60;
        newmins = remainingtime % 60;

        if(newhours == 0 && newmins<=59)
        {
            cout << "LATE" << endl << newmins << " minutes after the class .";

        }

        else
        {
            cout << "LATE" << endl;
            cout << newhours << ":" << newmins << " minutes after the class .";


        }

    }

}

