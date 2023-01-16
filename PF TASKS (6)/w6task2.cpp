#include<iostream>
using namespace std;

float amountTotal(int amount, string day, string month );

main()
{
  int amount;
  string day;  
  string month;
  float result;
  
  cout<<"ENTER THE AMOUNT: ";
  cin>>amount;  
  cout<<"ENTER THE DAY: ";
  cin>>day;
  cout<<"ENTER THE MONTH: ";
  cin>>month;
  
  result=amountTotal(amount, day, month);
  cout<<"OUTPUT IS: "<<result;
 

}


float amountTotal(int amount, string day, string month )
{
   float discount1;
   float discount2;
   float totalAmount;
   discount1= (amount *10)/100;
   discount2= (amount *5)/100;
   if(day=="Sunday" && (month=="October" || month=="March" || month=="August"))
   {
      totalAmount= amount-discount1;
   }
 
   else if(day=="Monday" && (month=="November" || month=="December"))

   {
     totalAmount=amount-discount2;
   }

   else
   {
     totalAmount=amount;

    }
   return totalAmount;
}
