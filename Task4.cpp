#include<iostream>
using namespace std;
float Service(char service,float min);
main()
{
    char service;
    float min;
    cout<<"Enter type of Service: ";
    cin>>service;
    cout<<"Enter minutes for which service was used: ";
    cin>>min;
    float result = Service(service,min);
    cout<<"The charges are: $"<<result;

}
    float Service(char service,float min)
    {
        float min1;
        char time;
        float charge;
        if(service=='R' || service=='r')
        {
            min1 = min - 50;
            if(min>0)
            {
                charge = (min1*0.20) +10;
            }
            if(min<0)
            {
                charge = 10;
            }
        }
        
        if(service=='P' || service=='p')
        {
             cout<<"(Press D for day time and press N for nigh time) call: "<<endl;
             cin>>time;
                 if(time=='D')
                 {
                     min1 = min-75;
                     if(min1>0)
                     {
                        charge = (min1*0.10)+25;
                     }
                     if(min1<0)
                     {
                        charge = 25;
                     }
                 }
                 if(time=='N')
                 {
                     min1 = min-100;
                     if(min1>0)
                     {
                        charge = (min1*0.05)+25;
                     }
                     
                     if(min1<0)
                     {
                        charge = 25;
                     }
                 }
        }
        return charge;

    }