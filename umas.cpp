#include <iostream>
#include<windows.h>
using namespace std;
void menu();

void again();


main()
{
	
int choice;
menu();
string name1;
float matricMarks1;
float ecatMarks1;
float interMarks1;
string name2;
float matricMarks2;
float ecatMarks2;
float interMarks2;
float aggregate1;
float aggregate2;

 while(true)
   {
     again();
     cout<<"Enter your choice : ";
     cin>>choice;
     if (choice == 1)
      {

       cout<<"Enter the name of first student : ";
       cin>>name1;
       cout<<"Enter your matric marks out of 1100 : ";
       cin>>matricMarks1;
       cout<<"Enter your inter marks out of 550 : ";
       cin>>interMarks1;
       cout<<"Enter your ecat marks out of 400 : ";
       cin>>ecatMarks1;
      }
    if (choice == 2)
     {
       cout<<"Enter the name of second student : ";
       cin>>name2;
       cout<<"Enter your matric marks out of 1100 : ";
       cin>>matricMarks2;
       cout<<"Enter your inter marks out of 550 : ";
       cin>>interMarks2;
       cout<<"Enter your ecat marks out of 400 : ";
       cin>>ecatMarks2;
     }
    if (choice == 3)
     {
       aggregate1 = (matricMarks1*30)/1100 + (interMarks1*30)/550 + (ecatMarks1*40)/400;
       cout<<"The aggregate of first student is : "<<aggregate1<<endl;
     }
    if (choice == 4)
     {
       aggregate2 = (matricMarks2*30)/1100 + (interMarks2*30)/550 + (ecatMarks2*40)/400;
       cout<<"The aggregate of second student is : "<<aggregate2<<endl;
     }
     if (choice == 5)
     {
     if (aggregate1>aggregate2)
     {
     cout<<name1<<" has Roll no 1. "<<endl;
	 }
	  if (aggregate2>aggregate1)
     {
     cout<<name2<<" has Roll no 1. "<<endl;
	 }
	 }

   }
}
void menu()
{

cout<<"               ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **               "<<endl;
cout<<"              **                                                                 **             "<<endl;
cout<<"             **                                                                    **              "<<endl;
cout<<"            **               ########################################                **              "<<endl;
cout<<"           **                #                                      #                  **           "<<endl;
cout<<"          **                 #     UNIVERSITY    ADMISSION          #                    **          "<<endl;
cout<<"         **                  #                                      #                      **           "<<endl;
cout<<"        **                   #      MANAGEMENT   SYSTEM             #                      **        "<<endl;
cout<<"       **                    #                                      #                    **            "<<endl;
cout<<"      **                     ########################################                  **         "<<endl;
cout<<"     **                                                                             **                "<<endl;
cout<<"    **                                                                            **                   "<<endl;
cout<<"   ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  ** ** ** ** ** ** ** ** ** **                     "<<endl;
}
void again()
{
cout<<"Press 1 to Enter the details of first student ! "<<endl;
cout<<"Press 2 to Enter the details of second students ! "<<endl;
cout<<"Press 3 to Enter the aggregate of first student ! "<<endl;
cout<<"Press 4 to Enter the aggregate of second student ! "<<endl;
cout<<"Press 5 to display the student with Roll No ! "<<endl;
}

