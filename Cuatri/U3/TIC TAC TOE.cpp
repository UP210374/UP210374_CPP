/*
Author: Paulina Jaquelin Alvarez Martinez
Date: 12/11/2022
Description: Show the tic tac toe game
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void displayBoard();
void move();
int selectPlay();
bool checkBox(int);
int setPlay(int);
bool isWinner();

int winner, play;
int row, col, turn;
char position[6][11] = {{' '}};

int main()
{
    char option;
    bool winner = false;
    cout << "TIC-TAC-TOE GAME :D" << endl
         << endl;
    cout << "Press Y to play or X to exit the game:  " << endl;
    cin >> option;
    if (option == 'Y' || option == 'y')
    {
        bool occupiedSquare = true;
        cout << "Even-numbered items are o and odd-numbered items are x" << endl
             << endl;
        move();
        displayBoard();
        cout << endl;
        do
        {
            play = selectPlay();
            occupiedSquare = checkBox(play);
            if (occupiedSquare == true)
            {
                cout << "Select other play";
            }
            else
            {
                setPlay(play);
                system("clear");
                displayBoard();
                cout << endl;
                winner = isWinner();
            }
            turn++;
        } while (turn <= 9 || winner == true);
        if (winner == true)
        {
            cout << "Congratulations you have won absolutely nothing but my appreciation for playing this game :)";
        }
        else
        {
            cout << "oh sorry, you lost :(";
        }
        
    }
    else
    {
        cout << "I didn't even want you to play :D" << endl
             << endl;
    }

    return 0;
}
void displayBoard()
{
    int board[6][11];
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if (row != 1 && row != 3 && col != 3 && col != 7)
            {
                if ((row == 0 || row == 2 || row == 4) && (col == 1 || col == 5 || col == 9))
                {
                    cout << position[row][col];
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

bool checkBox(int play)
{
    if (position[row][col] == 'x' || position[row][col] == 'o')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int setPlay(int play)
{
    int value;
    if (turn % 2 == 1)
    {
        value = 'x';
    }
    else
    {
        value = 'o';
    }
    if (play == 1)
    {
        position[0][1] = value;
    }
    else if (play == 2)
    {
        position[0][5] = value;
    }
    else if (play == 3)
    {
        position[0][9] = value;
    }
    else if (play == 4)
    {
        position[2][1] = value;
    }
    else if (play == 5)
    {
        position[2][5] = value;
    }
    else if (play == 6)
    {
        position[2][9] = value;
    }
    else if (play == 7)
    {
        position[4][1] = value;
    }
    else if (play == 8)
    {
        position[4][5] = value;
    }
    else if (play == 9)
    {
        position[4][9] = value;
    }
}

bool isWinner()
{
    if (turn % 2 == 1)
    {
        if (position[0][1] == 'x' && position[0][5] == position[0][1] && position[0][9] == position[0][1])
        {
            return true;
        }
        else if (position[2][1] == 'x' && position[2][5] == position[2][1] && position[2][9] == position[2][1])
        {
            return true;
        }
        else if (position[4][1] == 'x' && position[4][5] == position[4][1] && position[4][9] == position[4][1])
        {
            return true;
        }
        else if (position[0][1] == 'x' && position[2][1] == position[0][1] && position[4][1] == position[0][1])
        {
            return true;
        }
        else if (position[0][5] == 'x' && position[2][5] == position[0][5] && position[4][5] == position[0][5])
        {
            return true;
        }
        else if (position[0][9] == 'x' && position[2][9] == position[0][9] && position[4][9] == position[0][9])
        {
            return true;
        }
        else if (position[0][1] == 'x' && position[2][5] == position[0][1] && position[4][9] == position[0][1])
        {
            return true;
        }
        else if (position[4][1] == 'x' && position[2][5] == position[4][1] && position[0][9] == position[4][1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (position[0][1] == 'o' && position[0][5] == position[0][1] && position[0][9] == position[0][1])
        {
            return true;
        }
        else if (position[2][1] == 'o' && position[2][5] == position[2][1] && position[2][9] == position[2][1])
        {
            return true;
        }
        else if (position[4][1] == 'o' && position[4][5] == position[4][1] && position[4][9] == position[4][1])
        {
            return true;
        }
        else if (position[0][1] == 'o' && position[2][1] == position[0][1] && position[4][1] == position[0][1])
        {
            return true;
        }
        else if (position[0][5] == 'o' && position[2][5] == position[0][5] && position[4][5] == position[0][5])
        {
            return true;
        }
        else if (position[0][9] == 'o' && position[2][9] == position[0][9] && position[4][9] == position[0][9])
        {
            return true;
        }
        else if (position[0][1] == 'o' && position[2][5] == position[0][1] && position[4][9] == position[0][1])
        {
            return true;
        }
        else if (position[4][1] == 'o' && position[2][5] == position[4][1] && position[0][9] == position[4][1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}