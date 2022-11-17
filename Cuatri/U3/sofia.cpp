#include <iostream>
#include <stdio.h>

using namespace std;

void displayHash();
void moves();
char selectMove();
bool checkBusyBox(char);
void placeMove(char);
bool checkWin();

int row;
int col;
char let[9][17];
int turnPlayer;

int main()
{
    char move;
    bool busyBox= true;
    bool winner= false;
    do
    {   cout << "Tic-Tac-Toe Game \n";
        displayHash();
        move= selectMove();
        busyBox= checkBusyBox;
        if (busyBox==false)
        {
            placeMove(move);
            system("clear");
            displayHash();
            winner= checkWin();
            if (winner== true)
            {
                cout << "Congratulations";
            }
        }
        else
        {
            cout << "Error :( Please enter a valid move \n";
        }
        
    } while (busyBox==true);

}

void displayHash()
{
    int hash[9][17];
    
    for (int row = 0; row < 9 ; row++)
    {
        for (int col = 0; col < 17; col++)
        {
            if ((row!=2) && (row!=5) && (col!=5) && (col!=11))
            {
                if ((row==1||row==4||row==7)&&(col==2||col==8||col==14))
                {
                    moves();
                    cout << let[row][col];  
                }
                else
                {
                    cout << " ";
                }  
            }
            else if ((col==5) || (col==11))
            {
                cout << "|";
            }
            else if ((row==2) || (row==5))
            {   
                cout << "_"; 
            }
            
        }
        cout << endl;
    }

}

void moves(){

    let[1][2]='a';
    let[1][8]='b';
    let[1][14]='c';
    let[4][2]='d';
    let[4][8]='e';
    let[4][14]='f';
    let[7][2]='g';
    let[7][8]='h';
    let[7][14]='i';

}

char selectMove()
{
    char move;
        cout << "Player " << turnPlayer % 2 + 1 << " Please enter your move: ";
        cin >> move;
    if (move!='a'||move!='b'||move!='c'||move!='d'||move!='e'||move!='f'||move!='g'||move!='h'||move!='i'){
        cout << "Error :( Please enter a valid move \n";
    }
        
    return move;
}

bool checkBusyBox(char move){
    if (move=='a')
    {
        row=1;
        col=2;
    }
     else if (move=='a')
    {
        row=1;
        col=2;
    }
     else if (move=='a')
    {
        row=1;
        col=2;
    }
     else if (move=='a')
    {
        row=1;
        col=2;
    }
     else if (move=='a')
    {
        row=1;
        col=2;
    }
     else if (move=='a')
    {
        row=1;
        col=2;
    }

    if (let[row][col]== 'X'||let[row][col]== 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void placeMove(char move){

    char moveValue;
    if(turnPlayer%2==0){
        moveValue= 'X';
    }
    else
    {
        moveValue='O';
    }
    
    if (move =='a')
    {
        let[1][2]= moveValue;
    }
    else if (move == 'b')
    {
        let[1][8]= moveValue;
    }
    else if (move== 'c')
    {
        let[1][14]= moveValue;
    }
    else if (move == 'd')
    {
        let[4][2]= moveValue;
    }
    else if (move == 'e')
    {
        let[4][8]= moveValue;
    }
    else if (move == 'f')
    {
        let[4][14]= moveValue;
    }
    else if (move == 'g')
    {
        let[7][2]= moveValue;
    }
    else if (move == 'h')
    {
        let[7][8]= moveValue;
    }
    else if (move == 'i')
    {
        let[7][14]= moveValue;
    }

}

bool checkWin(){
     if (let[1][2] == let[1][8] && let[1][8] == let[1][14])

        return true;
    else if (let[4][2] == let[4][8] && let[4][8] == let[4][14])

        return true;
    else if (let[7][2] == let[7][8] && let[7][8] == let[7][14])

        return true;
    else if (let[1][2] == let[4][2] && let[4][2] == let[7][2])

        return true;
    else if (let[1][8] == let[4][8] && let[4][8] == let[7][8])

        return true;
    else if (let[1][14] == let[4][14] && let[4][14] == let[7][14])

        return true;
    else if (let[1][2] == let[4][8] && let[4][8] == let[7][14])

        return true;
    else if (let[7][2] == let[4][8] && let[4][8] == let[1][14])

        return true;
    else
        return false;
}
