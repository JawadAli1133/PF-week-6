#include<iostream>
using namespace std;
string Title(int age,char gender);
main()
{
   int age;
   char gender;
   cout<<"Enter your age: ";
   cin>>age;
   cout<<"Enter your gender: ";
   cin>>gender;
   string title = Title(age,gender);
   cout<<"You title is: "<<title;

}

   string Title(int age,char gender)
   {

      string title;
      if(age>=16 && gender=='M')
      {
         title = "Mr.";
      }

      if(age<16 && gender=='M')
      {
         title = "Master";
      }

      if(age<16 && gender=='F')
      {
         title = "Miss";
      }

      if(age>=16 && gender=='F')
      {
         title = "Ms";
      }
      return title;
   }

   
   