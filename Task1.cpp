#include<iostream>
using namespace std;
string Activity(string temperature,string humidity);
main()
{
   string temperature,humidity;
   cout<<"Enter temperature: ";
   cin>>temperature;
   cout<<"Enter humidity: ";
   cin>>humidity;
   string result = Activity(temperature,humidity);
   cout<<result;
}

    string Activity(string temperature,string humidity)
    {
         string activity;
         if(temperature=="warm" && humidity=="dry")
         {
            activity ="Play Tennis";
         }

         if(temperature=="warm" && humidity=="humid")
         {
            activity ="Swim";
         }

         if(temperature=="cold" && humidity=="dry")
         {
            activity ="Play Basketball";
         }

         if(temperature=="cold" && humidity=="humid")
         {
            activity ="Watch TV";
         }
           return activity;



    }