/*
Author: Paulina Jaquelin Alvarez Martinez
Date: 12/11/2022
Description: Show the tic tac toe game
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void gotoxy(int x,int y);
void displayBoard();
void move();
int selectPlay();
bool checkBusyBox(int, string);
void setPlay(int, string, string);
bool isWinner(string);
int getPlayPC();
void cloneBoard();
int getBetterPlay(string);
int selectPlayPC();

int play;
int row, col, turn = 1;
char position[9][17] = {{' '}};
char positionIMG[9][17] = {{' '}};
const string PC = "Machine";
const string PERSON = "Person";
const string BOARD = "Real";
const string IMGBOARD = "Imaginary";

int main(){
    char option;
    bool winner = false;
    gotoxy(35,0);
    cout << "\x1B[38;2;255;151;203m" << "TIC-TAC-TOE GAME :D" << "\x1b[0m" << endl;
    gotoxy(25,2);
    cout << "Press Y to play or X to exit the game:  ";
    cin >> option;
    if (option == 'Y' || option == 'y'){
        bool boxBusy = true;
        int gameType = 1;
        gotoxy(40,4);
        cout << "\x1B[38;2;255;151;203m" << "Menu" << "\x1b[0m" << endl;
        gotoxy(25,5);
        cout << "1. Player vs Player" << endl;
        gotoxy(25,6);
        cout << "2. Player vs PC" << endl;
        gotoxy(25,7);
        cout << "Plase select the game mood: ";
        cin >> gameType;
        gotoxy(0,0);
        move();
        displayBoard();
         do
        {
            if (gameType == 1)
            {
                play = selectPlay();
            }
            else
            {
                if (turn % 2 == 0)
                {
                    play = selectPlayPC();
                }
                else
                {
                    play = selectPlay();
                }
            }

            boxBusy = checkBusyBox(play, PERSON);
            if (boxBusy == true)
                cout << "Select other play";
            else
            {
                setPlay(play, BOARD, PERSON);
                system("clear");
                displayBoard();
                cout << endl;
                winner = isWinner(BOARD);
                turn++;
            }

        } while (turn <= 9 && winner == false);
        if (winner == true){
            if (turn%2==0){
                cout << "\x1B[38;2;255;151;203m" << "Congrats player 2, you have earned my appreciation for playing this game that has cost me tears" << "\x1b[0m"<< endl;
            }else{
                cout << "\x1B[38;2;255;151;203m" << "Congrats player 1, you have earned my appreciation for playing this game that has cost me tears" << "\x1b[0m" << endl;
            }
        }else if (winner == false){
            cout << "\x1B[38;2;255;151;203m" << "Draft :/" << "\x1b[0m" << endl;
        }
    }else{
        cout << endl;
        cout << "\x1B[38;2;255;151;203m" << "I didn't even want you to play :D" << "\x1b[0m" << endl;
    }
    return 0;
}
   
void gotoxy(int x,int y){
    cout << "\033[" << y << ";" << x << "f";
}

void displayBoard()
{
    int board[9][17];
    int color = 34;
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 17; col++)
        {
            if (row != 2 && row != 5 && col != 5 && col != 11)
            {
                if ((row == 1 || row == 4 || row == 7) && (col == 2 || col == 8 || col == 14))
                {
                     color=(position[row][col]=='X')?31
                        :(position[row][col]=='O')?32:37;
                    cout << "\x1B[1;" << color << "m" << position[row][col] << "\x1B[0m";
                }
                else
                {
                    cout << " ";
                }
            }
            else if (col == 5 || col == 11)
            {
                cout << "|";
            }
            else if (row == 2 || row == 5)
            {
                cout << "_";
            }
        }
        cout << endl;
    }
}

void move()
{
    position[1][2] = '1';
    position[1][8] = '2';
    position[1][14] = '3';
    position[4][2] = '4';
    position[4][8] = '5';
    position[4][14] = '6';
    position[7][2] = '7';
    position[7][8] = '8';
    position[7][14] = '9';
}

int selectPlay()
{
    cout << "Player" << " " << turn % 2 + 1 << endl;
    cout << "Select your move: ";
    cin >> play;
    return play;
}

bool checkBusyBox(int play, string board)
{
    bool boxBusy = false;
    if (play == 1)
    {
        row = 1;
        col = 2;
    }
    else if (play == 2)
    {
        row = 1;
        col = 8;
    }
    else if (play == 3)
    {
        row = 1;
        col = 14;
    }
    else if (play == 4)
    {
        row = 4;
        col = 2;
    }
    else if (play == 5)
    {
        row = 4;
        col = 8;
    }
    else if (play == 6)
    {
        row = 4;
        col = 14;
    }
    else if (play == 7)
    {
        row = 7;
        col = 2;
    }
    else if (play == 8)
    {
        row = 7;
        col = 8;
    }
    else if (play == 9)
    {
        row = 7;
        col = 14;
    }
    if (board == BOARD)
    {
        if (position[row][col] == 'X' || position[row][col] == 'O')
        {
            return true;
        }
    }
    else if (board == IMGBOARD)
    {
        if (positionIMG[row][col] == 'X' || positionIMG[row][col] == 'O')
        {
            return true;
        }
    }
    return boxBusy;    
}

void setPlay(int play, string board, string player)
{
    char value;
    int row, col;
    if (turn % 2 == 0)
        value = 'X';
    else
        value = 'O';

    if (play == 1)
    {
        row = 1;
        col = 2;
    }
    else if (play == 2)
    {
        row = 1;
        col = 8;
    }
    else if (play == 3)
    {
        row = 1;
        col = 14;
    }
    else if (play == 4)
    {
        row = 4;
        col = 2;
    }
    else if (play == 5)
    {
        row = 4;
        col = 8;
    }
    else if (play == 6)
    {
        row = 4;
        col = 14;
    }
    else if (play == 7)
    {
        row = 7;
        col = 2;
    }
    else if (play == 8)
    {
        row = 7;
        col = 8;
    }
    else if (play == 9)
    {
        row = 7;
        col = 14;
    }

    if (board == BOARD)
    {
        position[row][col] = value;
    }
    else if (board == IMGBOARD)
    {
        if (player == PERSON)
        {
            value = 'X';
        }
        else if (player == PC)
        {
            value = 'O';
        }
        positionIMG[row][col] = value;
    }
}

bool isWinner(string board)
{
    if (board == BOARD)
    {
        if (position[1][2] == position[1][8] && position[1][14] == position[1][2])
            return true;
        else if (position[4][2] == position[4][8] && position[4][14] == position[4][2])
        {
            return true;
        }
        else if (position[7][2] == position[7][8] && position[7][14] == position[7][2])
        {
            return true;
        }
        else if (position[1][2] == position[4][2] && position[7][2] == position[1][2])
        {
            return true;
        }
        else if (position[1][8] == position[4][8] && position[7][8] == position[1][8])
        {
            return true;
        }
        else if (position[1][14] == position[4][14] && position[7][14] == position[1][14])
        {
            return true;
        }
        else if (position[1][2] == position[4][8] && position[7][14] == position[1][2])
        {
            return true;
        }
        else if (position[1][14] == position[4][8] && position[7][2] == position[1][14])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (board == IMGBOARD)
    {
        if (positionIMG[1][2] == positionIMG[1][8] && positionIMG[1][14] == positionIMG[1][2])
            return true;
        else if (positionIMG[4][2] == positionIMG[4][8] && positionIMG[4][14] == positionIMG[4][2])
        {
            return true;
        }
        else if (positionIMG[7][2] == positionIMG[7][8] && positionIMG[7][14] == positionIMG[7][2])
        {
            return true;
        }
        else if (positionIMG[1][2] == positionIMG[4][2] && positionIMG[7][2] == positionIMG[1][2])
        {
            return true;
        }
        else if (positionIMG[1][8] == positionIMG[4][8] && positionIMG[7][8] == positionIMG[1][8])
        {
            return true;
        }
        else if (positionIMG[1][14] == positionIMG[4][14] && positionIMG[7][14] == positionIMG[1][14])
        {
            return true;
        }
        else if (positionIMG[1][2] == positionIMG[4][8] && positionIMG[7][14] == positionIMG[1][2])
        {
            return true;
        }
        else if (positionIMG[1][14] == positionIMG[4][8] && positionIMG[7][2] == positionIMG[1][14])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
        return false;
}

int selectPlayPC()
{
    bool boxBusy = false;
    int play;
    srand(time(NULL));
    play = getBetterPlay(PC);
    if (play != -1)
    {
        return play;
    }
    play = getBetterPlay(PERSON);
    if (play != -1)
    {
        return play;
    }
    do
    {
        play = 1 + rand() % 9;
        boxBusy = checkBusyBox(play,BOARD);
    }while (boxBusy == true);
    return play;
}

void cloneBoard(){
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 17; col++)
        {
            positionIMG[row][col] = position[row][col];
        }
    }
}

int getBetterPlay(string player)
{
    bool boxBusy = false;
    bool winner = false;
    int play = 0;
    cloneBoard();
    if (player == PC)
    {
        do
        {
            play++;
            boxBusy=checkBusyBox(play, IMGBOARD);
            if (boxBusy== false){
                setPlay(play, IMGBOARD, PC);
                winner = isWinner (IMGBOARD);
            }
            cloneBoard();
        } while (play <= 9 && winner == false);
    } 
    else if (player == PERSON)
    {
        do
        {
            play++;
            boxBusy=checkBusyBox(play, IMGBOARD);
            if (boxBusy== false){
                setPlay(play, IMGBOARD, PERSON);
                winner = isWinner(IMGBOARD);
            }
            cloneBoard();
        } while (play <= 9 && winner == false);
    }
    if (play >= 10){
        play= -1;
    }
    return play;
}
