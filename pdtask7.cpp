#include<iostream>
using namespace std;
main(){
 


 
      string moviename;
      float adultprice;
      float childprice;
      float adultsold;
      float childsold;
      float donatepercentage;
      float totalamount;
      float afterdonation;
      float donationpercentage;
 
      cout<<"ENTER MOVIE NAME: ";
      cin>>moviename;
      cout<<"ENTER ADULT TICKET PRICE: ";
      cin>>adultprice;
      cout<<"ENTER THE CHILD TICKET PRICE: ";
      cin>>childprice;
      cout<<"ENTER NUMBER OF ADULT TICKET SOLD: ";
      cin>>adultsold;
      cout<<"ENTER NUMBER OF CHILD TICKET SOLD: ";
      cin>>childsold;
      cout<<"ENTER PERCENTAGE TO DONATE: ";
      cin>>donatepercentage;
      totalamount= (adultprice*adultsold)+(childprice*childsold);
      donationpercentage= totalamount/10;
      afterdonation= totalamount-donationpercentage;
      cout<<"TOTAL AMOUNT GENERATED: "<<totalamount <<endl;
      cout<<"AMOUNT AFTER DONATION: "<<afterdonation;
}
         
    