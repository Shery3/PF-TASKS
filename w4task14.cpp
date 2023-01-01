#include <iostream>
using namespace std;


void printMenu();
void calculateAggregate( string name, float matricMarks, float interMarks,float ecatMarks);
void compareMarks( string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);


main()

{

printMenu();

string name;
float matricMarks;
float interMarks;
float ecatMarks;
cout << "ENTER YOUR NAME: ";
cin >> name;
cout << "ENTER YOUR MATRIC MARKS: ";
cin >> matricMarks;
cout << "ENTER YOUR INTER MARKS: ";
cin >> interMarks;
cout << "ENTER YOUR ECAT MARKS: ";
cin >> ecatMarks;

calculateAggregate(name, matricMarks, interMarks, ecatMarks);



string nameStd1;
int ecatMarksStd1;
string nameStd2;
int ecatMarksStd2;

cout << "ENTER NAME OF STUDENT1: ";
cin >>  nameStd1;
cout << "ENTER ECAT MARKS OF STUDENT1: ";
cin >> ecatMarksStd1;
cout << "ENTER NAME OF STUDENT2: ";
cin >> nameStd2; 
cout << "ENTER ECAT MARKS OF STUDENT2: ";
cin >> ecatMarksStd2;

compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);


}



void printMenu()

{



cout << "    *************************************************************************** " << endl;
cout << "    *                                                                         * " <<endl;
cout << "    *                  University of Engineering and Technology               * " <<endl;
cout << "    *                                                                         * " <<endl;
cout << "    *************************************************************************** " <<endl;


}

void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)

{


float matricresult;
matricresult = (matricMarks/1100)*30;
float interresult;
interresult = (interMarks/550)*30;
float ecatresult;
ecatresult = (ecatMarks/400)*40;

float aggregate;
aggregate = matricresult + interresult + ecatresult;

cout << "YOUR AGGREGATE IS: ";
cout << aggregate;
cout <<endl;

}



void compareMarks( string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)

{

if(ecatMarksStd1 > ecatMarksStd2)
{ cout << nameStd1<<endl;
 cout << "THIS STUDENT HAS GREATER MARKS..";
}

if(ecatMarksStd1 < ecatMarksStd2)
{ cout << nameStd2<<endl;
 cout << "THIS STUDENT HAS GREATER MARKS..";
}


}





