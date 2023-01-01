#include <iostream>
#include <windows.h>
using namespace std;
void discount(string countryName, float dollars);
main()
{
string countryName;
float dollars;
cout<<"Enter the country name : ";
cin>>countryName;
cout<<"Enter the price of ticket :";
cin>>dollars;
discount(countryName,dollars);

}
void discount(string countryName, float dollars)
{
 if (countryName == "Pakistan")
   {
    int price = dollars-dollars*0.05;   
   cout<<"The price after discount is : "<<price;
   }
 if (countryName == "Ireland")
   { 
  int price = dollars-dollars*0.1;  
   cout<<"The price after discount is : "<<price;
 
   }
 if (countryName == "India")
   { 
int price = dollars-dollars*0.2; 
   cout<<"The price after discount is : "<<price;
   
   }
 if (countryName == "England")
   {
   int price = dollars-dollars*0.3;   
   cout<<"The price after discount is : "<<price;
   
   }
 if (countryName == "canada")
   { 
   int price = dollars-dollars*0.4;  
   cout<<"The price after discount is : "<<price;
   
   }




}
