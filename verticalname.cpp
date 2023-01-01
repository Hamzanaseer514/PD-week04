#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void a();
void w();
void i();
void s();
void name();
main()
{
system("cls");

a();
w();
a();
i();
s();
}
void a()
{
cout<<"       *                             "<<endl;
cout<<"      * *                            "<<endl;
cout<<"     *****                        "<<endl;
cout<<"    *     *                      "<<endl;
cout<<"   *       *                   "<<endl;
}
void w()
{
cout<<"    *     *                         "<<endl;
cout<<"    *     *                         "<<endl;
cout<<"    *  *  *                          "<<endl;
cout<<"    * * * *                           "<<endl;
cout<<"    *     *                         "<<endl;
}
void i()
{
cout<<"     *****         "<<endl;
cout<<"       *       "<<endl;
cout<<"       *      "<<endl;
cout<<"       *     "<<endl;
cout<<"       *     "<<endl;
cout<<"     *****    "<<endl;
}
void s()
{
cout<<"    ******              "<<endl;
cout<<"   *      *  "<<endl;
cout<<"  *        "<<endl;
cout<<"   *******   "<<endl;
cout<<"          *    "<<endl;
cout<<"   *       *   "<<endl;
cout<<"    *******   "<<endl;
} 

void gotoxy(int x,int y) 
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


