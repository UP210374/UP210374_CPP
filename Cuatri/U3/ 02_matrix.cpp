/*
Author: Paulina Jaquelin Alvarez Martinez 
Date: 28/10/2022
Description: Fill the matrix
*/
#include<iostream>
using namespace std;

int main(){
    int set [5][5];
     for (int row=0;row<2;row++){
        for(int col=0;col<2;col++){
                cout << "Enter value of position" << "(" << row << "," << col << ")" << ":";
                cin >> set[row][col];
            }
        }
     for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){
                cout << set [row][col]<< "\t";
            }
            cout << endl;
        }
    return 0;
}