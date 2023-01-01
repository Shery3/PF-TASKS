#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);


main()
{

  system("cls");
  int x=30;
  int y=20;
  gotoxy(x,y);
  cout<<"SHEHROZ AHMAD";


}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}







