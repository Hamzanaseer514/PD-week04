#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void name();
main()
{
system("cls");
gotoxy(9,10);
cout<<" *  *     *    *     *  ******       *             "<<endl;
gotoxy(9,11);
cout<<" *  *    * *   * * * *      *       * *                  "<<endl;
gotoxy(9,12);
cout<<" ****   *****  *  *  *     *       *****             "<<endl;
gotoxy(9,13);
cout<<" *  *  *     * *     *    *       *     *          "<<endl;
gotoxy(9,14);
cout<<" *  * *       **     *   ******  *       *      "<<endl;

}

void gotoxy(int x,int y) 
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


