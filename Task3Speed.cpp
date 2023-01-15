#include<iostream>
using namespace std;
string getSpeed(float speed1);
main()
{

    float speed1;
    cout<<"Enter speed of Vehicle: ";
    cin>>speed1;
    string result = getSpeed(speed1);
    cout<<"Your speed is "<<result;


}
    string getSpeed(float speed1)
    {
        string result;
        if(speed1<=10)
        {
            result = "Slow";
        }

        else if(speed1>10 && speed1<=50)
        {
            result = "Average";
        }

        else if(speed1>50 && speed1<=150)
        {
            result = "Fast";
        }

        else if(speed1>150 && speed1<=1000)
        {
            result = "Ultra-Fast";
        }

        else
        {
            result = "Extremely-Fast";
        }
        return result;
    }
  
