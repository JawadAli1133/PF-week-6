#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void clear(int x,int y,char previous);
char getCharAtxy( short int x,short int y);
void printGhost(int x,int y);
void printGhost1(int gx,int gy);
main()
{
    
    bool gamerun = true;
    int x = 3;
    int y = 16;
    int gx = 5;
    int gy = 3;
    string direction = "right";
    string direction1 = "down";
    char previousChar=' ';
    system("cls");
    printMaze();
    printGhost(x,y);
    printGhost1(gx,gy);

    while(true)
    {
        Sleep(100);
        if(direction=="right")
        {
             char nextLocation = getCharAtxy(x+1,y);
               if(nextLocation=='|')
               {
                  direction ="left";
               }
               else if(nextLocation==' ' || nextLocation=='.')
               {
                  clear(x,y,previousChar);
                  x = x+1;
                  previousChar = nextLocation;
                  printGhost(x,y);
               }

        }

        if(direction=="left")
        {
               char nextLocation = getCharAtxy(x-1,y);
               if(nextLocation=='|')
               {
                  direction ="right";
               }
               else if(nextLocation==' ' || nextLocation=='.')
               {
                  clear(x,y,previousChar);
                  x = x-1;
                  previousChar = nextLocation;
                  printGhost(x,y);
               }

        }
    

        if(direction1=="down")
        {
               char nextLocation = getCharAtxy(gx,gy+1);
               if(nextLocation=='%')
               {
                  direction1 ="up";
               }
               else if(nextLocation==' ' || nextLocation=='.')
               {
                  clear(gx,gy,previousChar);
                  gy = gy+1;
                  previousChar = nextLocation;
                  printGhost1(gx,gy);
               }

        }

        if(direction1=="up")
        {
               char nextLocation = getCharAtxy(gx,gy-1);
               if(nextLocation=='%')
               {
                  direction1 ="down";
               }
               else if(nextLocation==' ' || nextLocation=='.')
               {
                  clear(gx,gy,previousChar);
                  gy = gy-1;
                  previousChar = nextLocation;
                  printGhost1(gx,gy);
               }

        }
    }
}
       
       

    

    void printMaze()
    {

     cout<<"################################################################################"<<endl;                                                                       
     cout<<"||.. .............................................................   .....    ||"<<endl;                                                                             
     cout<<"||.. %%%%%%%%%%%%             ....       %%%%%%%%%%%%%%%%   |%|..    %%%%%    ||"<<endl;                                                                     
     cout<<"||..     |%|  |%|          |%|....       |%|          |%|   |%|..      |%|    ||"<<endl;                                                                              
     cout<<"||..     |%|  |%|          |%|....       |%|          |%|   |%|..      |%|    ||"<<endl;                                                                              
     cout<<"||..     %%%%%%%%   ...    |%|....       %%%%%%%%%%%%%%%%      ..    %%%%% .  ||"<<endl;
     cout<<"||..     |%|        ...    |%|....      ................. |%|  ..          .  ||"<<endl;
     cout<<"||..     %%%%%%%%%% ...    |%|....     %%%%%%%%%%%%%%%    |%|  ..    %%%%% .  ||"<<endl;
     cout<<"||..            |%| ...       ....     |%|..........      |%|  ..      |%| .  ||"<<endl;
     cout<<"||..    ........|%| ...                |%|..........|%|        ..      |%| .  ||"<<endl;
     cout<<"||..|%| |%|%%|%||%| ...  |%|              ..........|%|        ..      |%| .  ||"<<endl;
     cout<<"||..|%| |%|  |%|..       %%%%%%%%%%%%%%   ..........|%|        ..|%|.         ||"<<endl;
     cout<<"||..|%| |%|  |%|..               ...|%|          %%%%%%        ..|%|.         ||"<<endl;
     cout<<"||..|%|          .               ...|%|                   |%|  ..|%|.         ||"<<endl;
     cout<<"||..|%| %%%%%%%%%%%%             ...|%|%%%%%%%%%%%%%      |%|  ..|%|.%%%%%%%  ||"<<endl;
     cout<<"||                                                        |%|  .............  ||"<<endl;
     cout<<"||     .............................................                 .......  ||"<<endl;
     cout<<"||..|%|  |%|  |%|..  %%%%%%%%%%%%%%%%%  .........|%|      |%| ...|%|.         ||"<<endl;
     cout<<"||..|%|  |%|  |%|..             ...|%|        %%%%%%      |%| ...|%|.         ||"<<endl;
     cout<<"||..|%|           .             ...|%|                    |%| ...|%|.         ||"<<endl;
     cout<<"||..|%|  %%%%%%%%%%%%           ...|%|%%%%%%%%%%%%%       |%| ...|%|%%%%%%%   ||"<<endl;
     cout<<"||.................................................       |%| .............   ||"<<endl;
     cout<<"||...........................................                                 ||"<<endl;
     cout<<"################################################################################"<<endl;
    }

    void gotoxy(int x,int y)
    {
        COORD coordinates;
        coordinates.X = x;
        coordinates.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
    }

    void clear(int x,int y,char previous)
    {
        gotoxy(x,y);
        cout<<previous;
    }


    void printGhost(int x,int y)
    {
        gotoxy(x,y);
        cout<<"G";
    }

    void printGhost1(int gx,int gy)
    {
        gotoxy(gx,gy);
        cout<<"G";
    }

    char getCharAtxy(short int x,short int y)
    {
        CHAR_INFO ci;
        COORD xy ={0,0};
        SMALL_RECT rect = {x, y, x, y};
        COORD  coorsBufSize;
        coorsBufSize.X = x;
        coorsBufSize.Y = y;
        return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci ,coorsBufSize,xy, &rect) ? ci.Char.AsciiChar : ' ';
        
    }      