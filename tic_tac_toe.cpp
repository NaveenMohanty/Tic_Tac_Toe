#include<iostream>
#include<stdlib.h>
using namespace std;
char ar[9]={'1','2','3','4','5','6','7','8','9'},p1[20],p2[20];
void show()
{
    cout<<"\n     |     |     \n";
    cout<<"  "<<ar[0]<<"  |  "<<ar[1]<<"  |  "<<ar[2]<<"  \n";
    cout<<"     |     |     \n";
    cout<<"-----|-----|-----\n";
    cout<<"     |     |     \n";
    cout<<"  "<<ar[3]<<"  |  "<<ar[4]<<"  |  "<<ar[5]<<"  \n";
    cout<<"     |     |     \n";
    cout<<"-----|-----|-----\n";
    cout<<"     |     |     \n";
    cout<<"  "<<ar[6]<<"  |  "<<ar[7]<<"  |  "<<ar[8]<<"  \n";
    cout<<"     |     |     \n";

}

int check()
{
    if(ar[0]=='X'&&ar[1]=='X'&&ar[2]=='X')
        return 1;
    else if(ar[3]=='X'&&ar[4]=='X'&&ar[5]=='X')
        return 1;
    else if(ar[6]=='X'&&ar[7]=='X'&&ar[8]=='X')
        return 1;
    else if(ar[0]=='X'&&ar[3]=='X'&&ar[6]=='X')
        return 1;
    else if(ar[1]=='X'&&ar[4]=='X'&&ar[7]=='X')
        return 1;
    else if(ar[2]=='X'&&ar[5]=='X'&&ar[8]=='X')
        return 1;
    else if(ar[0]=='X'&&ar[4]=='X'&&ar[8]=='X')
        return 1;
    else if(ar[2]=='X'&&ar[4]=='X'&&ar[6]=='X')
        return 1;


    else if(ar[0]=='O'&&ar[1]=='O'&&ar[2]=='O')
        return 0;
    else if(ar[3]=='O'&&ar[4]=='O'&&ar[5]=='O')
        return 0;
    else if(ar[6]=='O'&&ar[7]=='O'&&ar[8]=='O')
        return 1;
    else if(ar[0]=='O'&&ar[3]=='O'&&ar[6]=='O')
        return 0;
    else if(ar[1]=='O'&&ar[4]=='O'&&ar[7]=='O')
        return 0;
    else if(ar[2]=='O'&&ar[5]=='O'&&ar[8]=='O')
        return 0;
    else if(ar[0]=='O'&&ar[4]=='O'&&ar[8]=='O')
        return 0;
    else if(ar[2]=='O'&&ar[4]=='O'&&ar[6]=='O')
        return 0;

        return 5;
}
void start()
{
    cout<<"*******Tic Tac Toe*******\n";
    show();
    cout<<"\n***Rules***\n\n";
    cout<<"Press the specified number(1-9) to fill the table with X or O,\n\n";
    cout<<"This game will be of 10 Rounds.\n\n";
    cout<<"Winner will be declared after finishing the 10th Round.\n\n";
    cout<<"Name of player 1: ";
    cin>>p1;
    cout<<"Name of player 2: ";
    cin>>p2;
    system("PAUSE");
    system("CLS");
}
int main()
{
    start();
    int sc1=0,sc2=0;
    for(int i=1;i<=10;i++)
    {
        char c='1';
        for(int j=0;j<9;j++)
            ar[j]=c++;
        cout<<"Round: "<<i<<"\n\n";
        cout<<"Score-> "<<p1<<" :"<<sc1<<"    "<<p2<<" :"<<sc2<<"\n";
        int p=1,x;
        for(int j=0;j<9;j++)
        {
            show();
            cout<<p1<<"(X)"<<"   "<<p2<<"(O)"<<"\n";
          if(p==1)
          {
              cout<<p1<<" Enter block number:";
              cin>>x;
              ar[x-1]='X';
              p=0;
          }
          else
          {
              cout<<p2<<" Enter block number:";
              cin>>x;
              ar[x-1]='O';
              p=1;
          }
          if(check()==1)
          {
              sc1++;
              cout<<"\n"<<p1<<" won round "<<i<<"\n";

              break;
          }
          else if(check()==0)
          {
             sc2++;
              cout<<"\n"<<p2<<" won round "<<i<<"\n";

              break;
          }
        }
        if(check()==5)
            cout<<"\nIt was a tie\n";
        system("PAUSE");
        system("CLS");
    }
    system("CLs");
    if(sc1>sc2)
        cout<<p1<<" won the game.";
    else if(sc2>sc1)
        cout<<p2<<" won the game.";
    else
        cout<<"Game is a tie.";
}
