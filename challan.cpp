#include <iostream>
#include <windows.h>
using namespace std;
void challan(int speed);
main()
{
system("cls");
int speed;
cout<<"Enter the speed in km/hour : ";
cin>>speed;
challan(speed);


}
void challan(int speed)
{
 if (speed > 100)
  {
    cout<<"You will be challenged.";
  }
 if (speed < 100)
  {
    cout<<"Perfect! you are going good.";
  }




}
