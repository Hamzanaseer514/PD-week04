#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
main()
{
 int x = 4;
 int y = 5;
 system("cls");
 maze();
 while(true) {
  if (x<15) 
  {
  gotoxy(x,y);
  cout<<"P";
  x = x+1;
  }
 Sleep(500);
 gotoxy(x-1,5);
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