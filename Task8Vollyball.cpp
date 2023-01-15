#include<iostream>
using namespace std;
float volleyBall(string year,int holiday,int weekend);
main()
{
    string year;
    int holiday,weekend;
    cout<<"Enter type of year: ";
    cin>>year;
    cout<<"Enter holidays in a year: "; 
    cin>>holiday;
    cout<<"Enter number of weekends: "; 
    cin>>weekend;
    float result = volleyBall(year,holiday,weekend);
    cout<<result;

}

  float volleyBall(string year,int holiday,int weekend)
  {
       float holidays;
       float weekends;
       float weekEnd1;
       float Sunday;
       int result;
       holidays = holiday*(0.67);
       weekends = 48 - weekend;
       weekEnd1 = weekends*(0.75);
       result = holidays+weekEnd1+weekend;
       if(year=="Normal")
       {
           return result;
       }
       
       if(year=="Leap")
       {
           return result+(result*0.15);
       }
        return 0;

  }