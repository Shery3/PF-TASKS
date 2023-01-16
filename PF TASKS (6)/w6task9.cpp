#include <iostream>
using namespace std;

int volleyball(int holidays, int weekends, string year);

main()
{
	string year;
	int holidays, weekends, playtime;

	cout << "Enter number of holidays: ";
	cin >> holidays;
	cout << "Enter number of weekends: ";
	cin >> weekends;
	cout << "Enter type of year: ";
	cin >> year;
   
    	playtime = volleyball(holidays, weekends, year);
    	cout << "Vladimir has played volleyball for " << playtime << ".";
   
}

int volleyball(int holidays, int weekends, string year)
{
	float playTimeWeekends = (48 * 0.75);
	float totalPlayTime = playTimeWeekends + (holidays * 0.6666666667);

	if (year == "Normal")
  	{
    		return totalPlayTime;
  	}

 	else if (year == "Leap")
  	{
  		 float playTimePercentage = totalPlayTime * 0.15;
   		 totalPlayTime = totalPlayTime + playTimePercentage;
   		 return totalPlayTime;
  	}
}