#include <iostream>
#include <windows.h>
using namespace std;
void trueFalse(string condition);
main()
{
system("cls");
string condition;
cout<<"Enter either true or false : ";
cin>>condition;

trueFalse(condition);

}
void trueFalse(string condition)
{
 if (condition == "true") 
    {
   cout<<"FALSE"; 
    }
 if (condition == "false") 
    {
   cout<<"TRUE"; 
    }




}