#include<iostream>
using namespace std;
float Price(string month,float stay);
main()
{
    string month;
    float stay;
    cout<<"Enter the name of month: ";
    cin>>month;
    cout<<"Enter number of stays: ";
    cin>>stay;
    float result = Price(month,stay);
    cout<<"Apartment price is: "<<result<<"$"<<endl;
}

   float Price(string month,float stay)
   {
       float studioPrice,apartPrice;
       float studioPrice1,apartPrice1;
       if(month=="May" || month=="October")
       {
            studioPrice = stay*50;
            apartPrice  = stay*65;
                 if(stay<=7)
                 {
                    studioPrice1 = studioPrice;
                    apartPrice1 = apartPrice;
                 }
                 if(stay>7 && stay<=14)
                 {
                    studioPrice1 = studioPrice - (studioPrice*0.05);  
                    apartPrice1 = apartPrice;
                 }

                 if(stay>14)
                 {
                    studioPrice1 = studioPrice - (studioPrice*0.3);
                    apartPrice1 = apartPrice - (apartPrice*0.1);
                 }           
       }

       if(month=="June" || month=="September")
       {
            studioPrice = stay*75.20;
            apartPrice  = stay*68.70;
                 if(stay<=14)
                 {
                    studioPrice1 = studioPrice;
                    apartPrice1 = apartPrice;
                 }
                 if(stay>14)
                 {
                    studioPrice1 = studioPrice - (studioPrice*0.2);
                    apartPrice1 = apartPrice - (apartPrice*0.1);
                 }           
       }

       if(month=="July" || month=="August")
       {
            studioPrice = stay*76;
            apartPrice  = stay*77;
                 if(stay<=14)
                 {
                    studioPrice1 = studioPrice;
                    apartPrice1 = apartPrice;
                 }
                 if(stay>14)
                 {
                    apartPrice1 = apartPrice - (apartPrice*0.1);
                    studioPrice1 = studioPrice;
                 }           
       }
       cout<<"Studio price is: "<<studioPrice1<<"$"<<endl<<endl; 
       return apartPrice1;
   }