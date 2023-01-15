#include<iostream>
using namespace std;
float Price(string time,float kiloMeter);
main()
{
    float kiloMeter;
    string time;
    cout<<"Enter kilometers you want to travel: ";
    cin>>kiloMeter;
    cout<<"Enter time: ";
    cin>>time;
    float result = Price(time,kiloMeter);
    cout<<result;
    
}

   float Price(string time,float kiloMeter)
   {
      float result;
      if((time=="day" || time=="night") && kiloMeter>100)
      {
         result= kiloMeter*0.06;  
      }

      if((time=="day" || time=="night") && kiloMeter>20)
      {
          result = kiloMeter*0.09;
      }

      if(time=="day" && kiloMeter<20)
      {
          result = (kiloMeter*0.79) +0.70;
      }
      if(time=="night" && kiloMeter<20)
      {
          result = (kiloMeter*0.90)+0.70;
      }

          return result;
   }