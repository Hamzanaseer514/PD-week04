#include <iostream>
#include <windows.h>
using namespace std;
void tomPlaying(int holidays,int workingDays);
main()
{
int holidays;
int workingDays;
int difference;
cout<<"Enter the holidays : ";
cin>>holidays;
workingDays = 365-holidays;
cout<<"The working days : "<<workingDays<<endl;

tomPlaying(holidays,workingDays);




}
void tomPlaying(int holidays,int workingDays)
{
int timeForGames;
timeForGames = (holidays*127) + (workingDays*63); 
cout<<"The time for games is : "<<timeForGames<<endl;
float difference;
difference = 30000-timeForGames;


if (difference>0)
  {
   cout<<"Tom runs away"<<endl;
   float hours;
   hours = difference/60;
   int store;
   store = hours;
   float min1;
   int min2;
   min1 = hours - store;
   min1 = min1*60;
   min2 = min1;
   
   
    cout<<store<< " hours and "<<min2<<" minutes";
   
  }
if (difference<0)
  {
   cout<<"Tom sleeps well"<<endl;
	 float hours;
	 difference = -(difference);
	 hours = difference/60;
    int store;
   store = hours;
   float min1;
   int min2;
   min1 = hours - store;
   min1 = min1*60;
   min2 = min1;


    cout<<store<< " hours and "<<min2<<" minutes";
  }
}
