#include<iostream>
using namespace std;
void Time(int startMin,int startHour,int studHour,int studMin);
main()
{
    int startMin,startHour;
    int studMin,studHour;
    cout<<"Enter start time(Hours): ";
    cin>>startHour;
    cout<<"Enter start time(Minutes): ";
    cin>>startMin;
    cout<<"Enter student time of arrival(Hour): ";
    cin>>studHour;
    cout<<"Enter student time of arrival(Minutes): ";
    cin>>studMin;
    Time(startMin,startHour,studHour,studMin);
    
}

     void Time(int startMin,int startHour,int studHour,int studMin)
     {
        string result;
        int studMin1,startMin1;
        int diff,hour=0,min;
        studMin1 = (studHour*60) + studMin;
        startMin1 = (startHour*60) + startMin;
        diff = studMin1 - startMin1;
          if(diff>0)
          {
             if(diff>59)
             {
                    
                    min = diff - 60;
                    hour = hour +1;
                    
                    cout<<hour<<":"<<min<<" hours Late"<<endl;
                    
             }
             else
             {
                 cout<<"You are "<<diff<<" minutes late";
             }
             
          }

          else if(diff<0 && diff<=-30)
          {
             if(diff<-59)
             {
                    
                    min = diff + 60;
                    hour = hour +1;
                    cout<<hour<<":"<<(-1)*min<<" hours before the start"<<endl;
                    
             }
             else
             {
                cout<<"You are "<<(-1)*diff<<" minutes early ";  
             }   
          }

          else
          {
             cout<<"You are on time"<<endl;
          }
          
     }