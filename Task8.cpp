#include <iostream>
using namespace std;
int Direction(int length,int x, int y);

main()
{
    int length,x,y,direction;
    cout<< "Enter the length: ";
    cin >> length;
    cout << "Enter coordinates in x direction: ";
    cin >> x;
    cout << "Enter coordinates in y direction: ";
    cin >>y;

    direction = Direction(coordX, coordY, length);
    if(direction == 1)
    {
        cout << "Inside";
    }
    if(direction == 2)
    {
        cout << "Outside";
    }
    if(direction == 3)
    {
        cout << "Border";
    }
    
}
     int Direction(int length,int x, int y);

{
    int direc;

    if(((x > 0) && (x < 3*length)) && (y > 0) && (y < length))
    {
        direc = 1;
    }
    else if(((x > length) && (x < 2*length)) && (y > 0) && (y < 4*length))
    {
        direc = 1;
    }
    else if(((x >= length) && (x <= 2*length)) && (y >= 0) && (y <= 4*length))
    {
        direc = 3;
    }
    else if(((x >= 0) && (x <= 3*length)) && (y >= 0) && (y <= length))
    {
        direc = 3;
    }
    else 
    {
        direc = 2;
    }
    return direc;
}