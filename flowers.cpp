#include <iostream>
#include <windows.h>
using namespace std;
void flowers(int amount1,int amount2,int amount3);
main()
{
int amount1;
int amount2;
int amount3;
cout<<"The amount of red roses you bought : ";
cin>>amount1;
cout<<"The amount of white roses you bought : ";
cin>>amount2;
cout<<"The amount of tulips you bought : ";
cin>>amount3;
flowers(amount1,amount2,amount3);

}
void flowers(int amount1,int amount2,int amount3)
{
float price1 = 2*amount1;

float price2 = 4.10*amount2;

float price3 = 2.50*amount3;

float totalPrice = price1+price2+price3;
cout<<"The original price is : "<<totalPrice<<endl;
  if (totalPrice > 200)
   {
    cout<<"The price after discount is : "<<totalPrice-totalPrice*0.2;
   }

}