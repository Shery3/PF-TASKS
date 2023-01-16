#include<iostream>
using namespace std;

string sign(int date, string month);

main()
{
   int date;
   string month;
   string output;
   cout<<"ENTER THE DATE: ";
   cin>>date;
   cout<<"ENTER THE MONTH: ";
   cin>>month;

   
   output= sign(date, month);
   cout<<"YOUR ASTROLOGICAL SIGN IS: "<<output;

}

string sign(int date, string month)
{    string result;
    if((date>=21 && month=="march") || (date<=19 && month=="april"))
    {
         result="aries";

    }

    if((date>=20 && month=="april") || (date<=20 && month=="may"))
    {
         result="taurus";

    }

    if((date>=21 && month=="may") || (date<=20 && month=="june"))
    {
         result="gemini";

    }

    if((date>=21 && month=="june") || (date<=22 && month=="july"))
    {
         result="cancer";

    }

     if((date>=23 && month=="july") || (date<=22 && month=="august"))
    {
         result="leo";

    }

     if((date>=23 && month=="august") || (date<=22 && month=="september"))
    {
         result="virgo";

    }

     if((date>=23 && month=="september") || (date<=22 && month=="october"))
    {
         result="libra";

    }

     if((date>=23 && month=="october") || (date<=21 && month=="november"))
    {
         result="scorpio";

    }

     if((date>=22 && month=="november") || (date<=21 && month=="december"))
    {
         result="saggittarius";

    }

     if((date>=22 && month=="december") || (date<=19 && month=="january"))
    {
         result="capricon";

    }

     if((date>=20 && month=="january") || (date<=19 && month=="february"))
    {
         result="aquarius";

    }

     if((date>=19 && month=="february") || (date<=20 && month=="march"))
    {
         result="pisces";

    }
return result;


}