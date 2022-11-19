/*
Author: Paulina Jaquelin Alvarez Martinez
Date: 12/11/2022
Description: Show the tic tac toe game
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void displayBoard();
void move();
int selectPlay();
bool validValue(int);
bool checkBusyBox(int, string);
void setPlay(int, string, string);
bool isWinner(string);
int getPlayPC();
void cloneBoard();
int getBetterPlay(string);
int selectPlayPC();

int winner, play;
int row, col, turn = 1;
char position[6][11] = {{' '}};
char positionIMG[6][11] = {{' '}};
const string PC = "Machine";
const string PERSON = "Person";
const string BOARD = "Real";
const string IMGBOARD = "Imaginary";

int main()
{
    char option;
    bool winner = false;
    cout << "\x1B[38;2;255;151;203m"
         << "TIC-TAC-TOE GAME :D"
         << "\x1b[0m" << endl;
    cout << "Press Y to play or X to exit the game:  ";
    cin >> option;
    if (option == 'Y' || option == 'y')
    {
        bool boxBusy = true;
        bool isValid = true;

        int gameType = 1;
        cout << endl;
        cout << "\x1b[32m"
             << "Let's start :)"
             << "\x1b[0m" << endl
             << endl;
        cout << "\x1B[38;2;255;151;203m"
             << "       Menu     "
             << "\x1b[0m" << endl;
        cout << "0. Player vs PC" << endl;
        cout << "1. Player vs Player" << endl;
        cout << "Plase select the game mood: ";
        cin >> gameType;
        move();
        cout << endl;
        displayBoard();
        cout << endl;
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
                    // es la maquina
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

        if (winner == true)
        {
            cout << "Congratulations you have won absolutely nothing but my appreciation for playing this game :)" << endl;
        }
        else
        {
            cout << "oh sorry, you lost :(" << endl;
        }
    }
    else
        cout << "I didn't even want you to play :D" << endl;

    return 0;
}
void displayBoard()
{
    int board[6][11];
    int color = 34;

    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if (row != 1 && row != 3 && col != 3 && col != 7)
            {
                if ((row == 0 || row == 2 || row == 4) && (col == 1 || col == 5 || col == 9))
                {
                    color = (position[row][col] == 'X')   ? 31
                            : (position[row][col] == 'O') ? 32
                                                          : 37;

                    cout << "\x1B[1;" << color << "m" << position[row][col] << "\x1B[0m";
                }
                else
                {
                    cout << " ";
                }
            }
            else if (col == 3 || col == 7)
            {
                cout << "|";
            }
            else if (row == 1 || row == 3)
            {
                cout << "_";
            }
        }
        cout << endl;
    }
}

void move()
{
    position[0][1] = '1';
    position[0][5] = '2';
    position[0][9] = '3';
    position[2][1] = '4';
    position[2][5] = '5';
    position[2][9] = '6';
    position[4][1] = '7';
    position[4][5] = '8';
    position[4][9] = '9';
}

int selectPlay()
{
    cout << "Player"
         << " " << turn % 2 + 1 << endl;
    cout << "Select your move: ";
    cin >> play;
    return play;
}

bool checkBusyBox(int play, string board)
{
    bool boxBusy = false;
    if (play == 1)
    {
        row = 0;
        col = 1;
    }
    else if (play == 2)
    {
        row = 0;
        col = 5;
    }
    else if (play == 3)
    {
        row = 0;
        col = 9;
    }
    else if (play == 4)
    {
        row = 2, col = 1;
    }
    else if (play == 5)
    {
        row = 2;
        col = 5;
    }
    else if (play == 6)
    {
        row = 2;
        col = 9;
    }
    else if (play == 7)
    {
        row = 4;
        col = 1;
    }
    else if (play == 8)
    {
        row = 4;
        col = 5;
    }
    else if (play == 9)
    {
        row = 4;
        col = 9;
    }

    if (board == BOARD)
    {
        if (position[row][col] == 'x' || position[row][col] == 'o')
        {
            return true;
        }
        else if (board == IMGBOARD)
        {
            if (positionIMG[row][col] == 'x' || position[row][col] == 'o')
            {
                return true;
            }
        }
        return boxBusy;
    }
}

void setPlay(int play, string board, string player)
{
    char value;
    int row, col;
    if (turn % 2 == 0)
        value = 'x';
    else
        value = 'o';

    if (play == 1)
    {
        row = 0;
        col = 1;
    }
    else if (play == 2)
    {
        row = 0;
        col = 5;
    }
    else if (play == 3)
    {
        row = 0;
        col = 9;
    }
    else if (play == 4)
    {
        row = 2, col = 1;
    }
    else if (play == 5)
    {
        row = 2;
        col = 5;
    }
    else if (play == 6)
    {
        row = 2;
        col = 9;
    }
    else if (play == 7)
    {
        row = 4;
        col = 1;
    }
    else if (play == 8)
    {
        row = 4;
        col = 5;
    }
    else if (play == 9)
    {
        row = 4;
        col = 9;
    }

    if (board == BOARD)
    {
        position[row][col] = value;
    }
    else if (board == IMGBOARD)
    {
        if (play == 1)
        {
            row = 0;
            col = 1;
        }
        else if (play == 2)
        {
            row = 0;
            col = 5;
        }
        else if (play == 3)
        {
            row = 0;
            col = 9;
        }
        else if (play == 4)
        {
            row = 2, col = 1;
        }
        else if (play == 5)
        {
            row = 2;
            col = 5;
        }
        else if (play == 6)
        {
            row = 2;
            col = 9;
        }
        else if (play == 7)
        {
            row = 4;
            col = 1;
        }
        else if (play == 8)
        {
            row = 4;
            col = 5;
        }
        else if (play == 9)
        {
            row = 4;
            col = 9;
        }

        if (player == PERSON)
        {
            value = 'o';
        }
        else if (player == PC)
        {
            value = 'x';
        }
        positionIMG[row][col] = value;
    }
}

bool isWinner(string board)
{
    if (board == BOARD)
    {
        if (position[0][1] == position[0][5] && position[0][9] == position[0][1])
            return true;
        else if (position[2][1] == position[2][5] && position[2][9] == position[2][1])
        {
            return true;
        }
        else if (position[4][1] == position[4][5] && position[4][9] == position[4][1])
        {
            return true;
        }
        else if (position[0][1] == position[2][1] && position[4][1] == position[0][1])
        {
            return true;
        }
        else if (position[0][5] == position[2][5] && position[4][5] == position[0][5])
        {
            return true;
        }
        else if (position[0][9] == position[2][9] && position[4][9] == position[0][9])
        {
            return true;
        }
        else if (position[0][1] == position[2][5] && position[4][9] == position[0][1])
        {
            return true;
        }
        else if (position[4][1] == position[2][5] && position[0][9] == position[4][1])
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
        if (positionIMG[0][1] == positionIMG[0][5] && positionIMG[0][9] == positionIMG[0][1])
            return true;
        else if (positionIMG[2][1] == positionIMG[2][5] && positionIMG[2][9] == positionIMG[2][1])
        {
            return true;
        }
        else if (positionIMG[4][1] == positionIMG[4][5] && positionIMG[4][9] == positionIMG[4][1])
        {
            return true;
        }
        else if (positionIMG[0][1] == positionIMG[2][1] && positionIMG[4][1] == positionIMG[0][1])
        {
            return true;
        }
        else if (positionIMG[0][5] == positionIMG[2][5] && positionIMG[4][5] == positionIMG[0][5])
        {
            return true;
        }
        else if (positionIMG[0][9] == positionIMG[2][9] && positionIMG[4][9] == positionIMG[0][9])
        {
            return true;
        }
        else if (positionIMG[0][1] == positionIMG[2][5] && positionIMG[4][9] == positionIMG[0][1])
        {
            return true;
        }
        else if (positionIMG[4][1] == positionIMG[2][5] && positionIMG[0][9] == positionIMG[4][1])
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
        boxBusy = checkBusyBox(play, BOARD);
    } while (boxBusy == true);
    return play;
}
void cloneBoard()
{
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            positionIMG[row][col] = position[row][col];
        }
    }
}

int getBetterPlay(string player)
{
    bool boxBusy = false;
    bool gameover = false;
    int play = 0;
    cloneBoard();
    if (player == PC)
    {
        do
        {
            play++;
            boxBusy = checkBusyBox(play, IMGBOARD);
            if (boxBusy == false)
            {
                setPlay(play, IMGBOARD, PC);
                gameover = isWinner(IMGBOARD);
            }
            cloneBoard();
        } while (play <= 9 && gameover == false);
    }
    else if (player == PERSON)
    {
        do
        {
            play++;
            boxBusy = checkBusyBox(play, IMGBOARD);
            if (boxBusy == false)
            {
                setPlay(play, IMGBOARD, PERSON);
                gameover = isWinner(IMGBOARD);
            }
            cloneBoard();
        } while (play <= 9 && gameover == false);
    }
    if (play >= 10)
    {
        play = -1;
    }
    return play;
}