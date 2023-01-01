#include <iostream>
#include <windows.h>
using namespace std;
void trueFalse(int number1,int number2);
main()
{
system("cls");
int number1;
int number2;
cout<<"Enter the first number : ";
cin>>number1;
cout<<"Enter the second number : ";
cin>>number2;
trueFalse(number1,number2);

}
void trueFalse(int number1,int number2)
{
 if (number1 == number2)
   {
    cout<<"TRUE";
   }
 if (number1 != number2)
   {
    cout<<"FALSE";
   }



}