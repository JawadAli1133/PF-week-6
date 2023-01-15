#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void clearPac(int x,int y);
char getCharAtxy( short int x,short int y);
void printPacman(int x,int y);
void scoreBoard(int score);
void gameOver();
main()
{
    system("cls");
    bool gamerun = true;
    int x = 30;
    int y = 10;
    int score = 0;
    
       printMaze();
       printPacman(x,y);
       
       while(gamerun)
       {
         
         
         scoreBoard(score);
         if(GetAsyncKeyState(VK_LEFT))
         {
             char nextLocation = getCharAtxy(x-1,y);
              if(nextLocation == ' ')
              {
                 clearPac(x,y);
                 x = x-1;
                 printPacman(x,y);

              }
              if(nextLocation == '.')
              {
                clearPac(x,y);
                x = x-1;
                printPacman(x,y);
                score = score+1;
              }   
              if(nextLocation =='+')
              {
                 clearPac(x,y);
                 x = x-1;
                 printPacman(x,y);
                 score = score+5;
              }
         }

         if(GetAsyncKeyState(VK_RIGHT))
         {
             char nextLocation = getCharAtxy(x+1,y);
              if(nextLocation == ' ')
              {
                 clearPac(x,y);
                 x = x+1;
                 printPacman(x,y);
              }
              if(nextLocation == '.')
              {
                clearPac(x,y);
                x = x+1;
                printPacman(x,y);
                score = score+1;
              } 
              if(nextLocation =='+')
              {
                 clearPac(x,y);
                 x = x+1;
                 printPacman(x,y);
                 score = score+5;
              }  
              
         }

         if(GetAsyncKeyState(VK_UP))
         {
             char nextLocation = getCharAtxy(x,y-1);
              if(nextLocation == ' ')
              {
                 clearPac(x,y);
                 y = y-1;
                 printPacman(x,y);
              }
              if(nextLocation == '.')
              {
                clearPac(x,y);
                y = y-1;
                printPacman(x,y);
                score = score+1;
              } 
              if(nextLocation =='+')
              {
                 clearPac(x,y);
                 y = y-1;
                 printPacman(x,y);
                 score = score+5;
              }  
              
         }

         if(GetAsyncKeyState(VK_DOWN))
         {
             char nextLocation = getCharAtxy(x,y+1);
              if(nextLocation == ' ')
              {
                 clearPac(x,y);
                 y =y+1;
                 printPacman(x,y);
              }
              if(nextLocation == '.')
              {
                clearPac(x,y);
                y = y+1;
                printPacman(x,y);
                score = score+1;
              }   
              if(nextLocation =='+')
              {
                 clearPac(x,y);
                 y = y+1;
                 printPacman(x,y);
                 score = score+5;
              }
              
         }
        Sleep(200);
        
      }
         if(GetAsyncKeyState(VK_ESCAPE))
         {
            gamerun = false;
            system("cls");
            gameOver();
            

         }
         
           gotoxy(1,25);
}
       
       

    

    void printMaze()
    {

     cout<<"################################################################################"<<endl;                                                                       
     cout<<"||.. .............................................................   .....    ||"<<endl;                                                                             
     cout<<"||.. %%%%%%%%%%%%             ..+.       %%%%%%%%%%%%%%%%   |%|..    %%%%%    ||"<<endl;                                                                     
     cout<<"||..     |%|  |%|          |%|....       |%|          |%|   |%|..      |%|    ||"<<endl;                                                                              
     cout<<"||..     |%|  |%|          |%|....       |%|          |%|   |%|..      |%|    ||"<<endl;                                                                              
     cout<<"||..     %%%%%%%%   ...    |%|....       %%%%%%%%%%%%%%%%      ..    %%%%% .  ||"<<endl;
     cout<<"||..     |%|        ...    |%|....      ...........+..... |%|  ..          .  ||"<<endl;
     cout<<"||..     %%%%%%%%%% ...    |%|....     %%%%%%%%%%%%%%%    |%|  ..    %%%%% .  ||"<<endl;
     cout<<"||..            |%| ...       ....     |%|..........      |%|  ..      |%| .  ||"<<endl;
     cout<<"||++    ........|%| .+.                |%|..........|%|        ..      |%| +  ||"<<endl;
     cout<<"||..|%| |%|%%|%||%| ...  |%|              ..........|%|        ..      |%| .  ||"<<endl;
     cout<<"||..|%| |%|  |%|..       %%%%%%%%%%%%%%   ..........|%|        ..|%|.         ||"<<endl;
     cout<<"||..|%| |%|  |%|..               ...|%|          %%%%%%        ..|%|.         ||"<<endl;
     cout<<"||..|%|          .               ...|%|                   |%|  ..|%|.         ||"<<endl;
     cout<<"||..|%| %%%%%%%%%%%%             ...|%|%%%%%%%%%%%%%      |%|  ..|%|.%%%%%%%  ||"<<endl;
     cout<<"||                                                        |%|  ...+.........  ||"<<endl;
     cout<<"||     .............................................                 .......  ||"<<endl;
     cout<<"||..|%|  |%|  |%|..  %%%%%%%%%%%%%%%%%  .........|%|      |%| ...|%|.         ||"<<endl;
     cout<<"||..|%|  |%|  |%|..             ...|%|        %%%%%%      |%| ...|%|.         ||"<<endl;
     cout<<"||..|%|           .             ...|%|                    |%| ...|%|.         ||"<<endl;
     cout<<"||..|%|  %%%%%%%%%%%%           ...|%|%%%%%%%%%%%%%       |%| ...|%|%%%%%%%   ||"<<endl;
     cout<<"||...............................................+.       |%| .............   ||"<<endl;
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

    void clearPac(int x,int y)
    {
        gotoxy(x,y);
        cout<<" ";
    }

    void printPacman(int x,int y)
    {
        gotoxy(x,y);
        cout<<"P";
    }

    void printGhost(int x,int y)
    {
        gotoxy(x,y);
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

    void scoreBoard(int score)
    {
        gotoxy(84,23);
        cout<<"Your Score: "<<score;
    }
    void gameOver()
    {
        
        cout<<"#################################################################"<<endl;
        cout<<"#                                                               #"<<endl;
        cout<<"#                                                               #"<<endl;
        cout<<"#    *********        ***     **        **   ********           #"<<endl;
        cout<<"#   **               ** **    ** *    * **   **                 #"<<endl;
        cout<<"#   **              **   **   **   *    **   *******            #"<<endl;
        cout<<"#   **   *******    **   **   **        **   **                 #"<<endl;
        cout<<"#   ********  **    *******   **        **   **                 #"<<endl;
        cout<<"#     ******  **    **   **   **        **   ********           #"<<endl;
        cout<<"#                                                               #"<<endl;
        cout<<"#                                                               #"<<endl;
        cout<<"#     *******   *         *   *********     ******              #"<<endl;
        cout<<"#   **       **  *       *    **            **    *             #"<<endl;
        cout<<"#   **       **   *     *     ********      ** ***              #"<<endl;
        cout<<"#   **       **    *   *      **            ** *                #"<<endl;
        cout<<"#   **       **     * *       **            **  *               #"<<endl;
        cout<<"#     ******         *        *********     **   *              #"<<endl;
        cout<<"#################################################################"<<endl;


    }

    

        

    
    