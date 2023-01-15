#include<iostream>
using namespace std;
int Greatest(int x,int y,int z);
main()
{

    int x,y,z;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"Enter third number: ";
    cin>>z    int result = Greatest(x,y,z);
    cout<<result<<" is the greatest number ";
    }     

    int Greatest(int x,int y,int z)
    {
        if(x>y && x>z)
        {
            return x;
        }
        else if(y>x && y>z)
        {
            return y;
        }
        else(z>x && z>y)
        {
            return z;
        }
        return 0;
    }