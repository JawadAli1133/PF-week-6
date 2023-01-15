#include<iostream>
using namespace std;
float totalIncome(string screen,int row,int colom);
main()
{ 
     int row,colom;
     string screen;
     cout<<"Enter number of rows: ";
     cin>>row;
     cout<<"Enter number of coloms: ";
     cin>>colom;
     cout<<"Enter type of screening: ";
     cin>>screen;
     float result = totalIncome(screen,row,colom);
     cout<<"Total revenue is: "<<result;
}

  float totalIncome(string screen,int row,int colom)
  {
    float income;
    if(screen == "premiere")
    {
        income = row*colom*12;
    }

    if(screen == "normal")
    {
        income = row*colom*7.5;
    }

    if(screen == "discount")
    {
        income = row*colom*5;
    }
    return income;

    

  }

   