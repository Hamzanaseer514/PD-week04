#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
main()
{
 int x;
 int y = 2;
 system("cls");
 maze();
 while(true) {
  if (y<7) 
  { gotoxy(6,y);
  cout<<"p";
  y = y+1;
  }
 Sleep(500);
 gotoxy(6,y-1);
 cout<<" ";
}

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