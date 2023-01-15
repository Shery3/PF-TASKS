#include <iostream>
using namespace std;

void timeNeeded(float hours,float days,float workers);

main()

{

  float hours;
  float days;
  float workers;

  cout << "Enter number of hours = ";
  cin >> hours;
  cout << "Enter number of days = ";
  cin >> days;
  cout << "Enter number of workers = ";
  cin >> workers;

  timeNeeded(hours,days,workers);



}


void timeNeeded(float hours,float days,float workers)

{

   float days1;
    days1 = 0.1*days;
    days = days - days1;

   float workers1;
    workers1 = workers*10;

   float ans;
    ans = workers1*days;

   float answer;
    answer = ans - hours;

	if (ans > hours)
  	{ 
		cout << "Yes!" << answer << " hours are left" ;
	}

  	if (hours > ans)

  	{ 
		answer = -1*answer; 
   		cout << "Not enough time! " << answer << " hours needed"; 
	}



}
  

  






