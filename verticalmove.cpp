#include<iostream>
#include<windows.h>
using namespace std;
void maze;
void gotoxy(int x, int y);
void move(int x, int y);

main()
{
 system("cls");
 maze();
 int x=1;
 int y=3;
 while(true)
{
 move(x,y);
 if(x<30)
 {
 x=x+1;
 }
 if(x==15)
 {
  gotoxy(x,y-1);
 cout<<"";
  y=3;
 }
}
}
void maze()
 {
cout<<"######################################################################"<<endl;
cout<<"||.. ......................................................  ...... ||"<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%        ...      %%%%%%%%%%%%%%  |%|..   %%%%  ||"<<endl;
cout<<"||..       |%|    |%|     |%|...      |%|         |%| |%|..    |%|  ||"<<endl;
cout<<"||..       |%|    |%|     |%|...      |%|         |%| |%|..    |%|  ||"<<endl;
cout<<"||..       %%%%%%%%%% . . |%|...      %%%%%%%%%%%%%%%    ..   %%%%. ||"<<endl;
cout<<"||..       |%|        . . |%|...     ............... |%| ..       . ||"<<endl;
cout<<"||..       %%%%%%%%%% . . |%|...      %%%%%%%%%%%%   |%| ..   %%%%. ||"<<endl;
cout<<"||..              |%| .               |%|........    |%| ..    |%|. ||"<<endl;
cout<<"||..     .......  |%| .      P        |%|........|%|     ..    |%|. ||"<<endl;
cout<<"||..|%|  |%|%%|%|.|%| . |%|              ........|%|     ..|%| |%|. ||"<<endl,
cout<<"||..|%|  |%|  |%|..     %%%%%%%%%%%%%%%  ........|%|      .|%|.     ||"<<endl;
cout<<"||..|%|           .              ...|%|              |%| ..|%|.     ||"<<endl;
cout<<"||..|%| %%%%%%%%%%%%%            ...|%|%%%%%%%%%%    |%| ..|%|%%%   ||"<<endl;
cout<<"######################################################################"<<endl;
}
 void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void move(int x, int y)
{
 gotoxy(x,y-1);
 cout<<"";
 gotoxy(x,y);
 cout<<"P";
 Sleep(200);
}