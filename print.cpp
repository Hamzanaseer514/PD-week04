#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
main()
{
 system("cls");
 int x;
 int y;
 cout<<"Enter the value of X: ";
 cin>>x;
 cout<<"Enter the value of Y: ";
 cin>>y;
 system("cls");
 maze();
 gotoxy(x,y);
 cout<<"p";
 gotoxy(10,11);
}
void maze()
{
 cout<<"###############################"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"$                             $"<<endl;
 cout<<"###############################"<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 
}