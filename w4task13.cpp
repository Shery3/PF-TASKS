#include <iostream>
using namespace std;

void tom(int holidays);


main()

{


int holidays;
cout << "ENTER NUMBER OF HOLIDAYS: ";
cin >> holidays;
tom(holidays);

}

void tom(int holidays)

{

int workingdays;
workingdays = 365 - holidays;
int gameTime;
gameTime = (workingdays * 63 ) + (holidays * 127);
int difference;
difference = 30000 - gameTime;
if(difference < 0)
{
difference = difference * -1;}
float hours;
hours = (difference/60);
float mins;
mins = (difference % 60);

if( gameTime < 30000)

{ cout << "Tom sleeps well." <<endl;
  cout << hours;
 cout << "Hours and ";
  cout << mins;
 cout << "mins";
}


if (gameTime > 30000)
{ cout << "Tom will run away." <<endl;
  cout << hours;
 cout << "Hours and ";
  cout << mins;
 cout << "mins";
}


}









