/*
Author: Paulina Jaquelin Alvarez Martinez 
Date: 12/11/2022
Description: Show the tic tac toe game 
*/

#include<iostream>
using namespace std;

void construirTablero(char areaPartida[3][3]);
char areaPartida[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int seleccionarPartida();
bool comprobarCasillaOcupada(int);
int colocarPartida(int partida);
bool esGanador(char areaPartida);
int Ganador;
int row, col, turnoJugador;

int main (){
    int partida;
    bool casillaOcupada=true;
    cout << "Bienvenido al juego TIC-TAC-TOE" << endl << endl;
    construirTablero(areaPartida);
    do{
        partida=seleccionarPartida();
        casillaOcupada=comprobarCasillaOcupada(partida);
        if (casillaOcupada==true){
            cout << "Selecciona otra partida";
        }else {
            colocarPartida(partida);
            esGanador(Ganador);
        }
        }while (casillaOcupada==true);
    return 0;
}

void construirTablero (char areaPartida[3][3]){
    cout << endl;   
    cout << "--|---|--";
    cout << endl;
    for (int row=0;row<3;row++){
        for (int col=0;col<3;col++){
            if (row==0 && col==1 || row==1 && col==1 || row==2 && col==1 ){
                cout << " | " << areaPartida[row][col]<< " | ";
            }else {
                 cout << areaPartida[row][col]; 
            }
        }
        cout << endl;
        cout << "--|---|--";
    cout << endl;
    }
}


int seleccionarPartida(){
    int partida;
    do{
        cout << "Selecciona tu partida: ";
        cin >> partida;
    }while (partida<=9&&partida>0);
    return partida;
}

bool comprobarCasillaOcupada(int partida){
    if (partida==1){
        row=0;
        col=0;
    }else if (partida==2){
        row=0;
        col=1;
    }else if (partida==3){
        row=0;
        col=2;
    }else if (partida==4){
        row=1;
        col=0;
    }else if (partida==5){
        row=1;
        col=1;
    }else if (partida==6){
        row=1;
        col=2;
    }else if (partida==7){
        row=2;
        col=0;
    }else if (partida==8){
        row=2;
        col=1;
    }else if (partida==9){
        row=2;
        col=2;
    }

    if (areaPartida[row][col]=='x'|| areaPartida[row][col]=='o'){
        return true;
    }else 
    return false;
}

int colocarPartida(int partida){
    int colocarPartida;
     colocarPartida=(turnoJugador%2==0)?'x':'o';
     return colocarPartida;
}

bool esGanador(char areaPartida [3][3]){
    if (turnoJugador%2!=0){
         if (areaPartida[0][0]!='x'&&areaPartida[0][1]==areaPartida[0][0]&&areaPartida[0][2]==areaPartida[0][0]){
            return true;
        }else if (areaPartida[0][0]!='x'&&areaPartida[1][0]==areaPartida[0][0]&&areaPartida[2][0]==areaPartida[0][0]){
            Ganador=true;
        }else if (areaPartida[0][0]!='x'&&areaPartida[1][1]==areaPartida[0][0]&&areaPartida[2][2]==areaPartida[0][0]){
            return true;
        }else if (areaPartida[0][2]!='x'&&areaPartida[1][2]==areaPartida[0][2]&&areaPartida[2][2]==areaPartida[0][2]){
            return true;
        }else if (areaPartida[0][2]!='x'&&areaPartida[1][1]==areaPartida[0][2]&&areaPartida[2][0]==areaPartida[0][2]){
            return true;
        }else if (areaPartida[0][1]!='x'&&areaPartida[1][1]==areaPartida[0][1]&&areaPartida[2][1]==areaPartida[0][1]){
            return true;
        }else if (areaPartida[1][0]!='x'&&areaPartida[1][1]==areaPartida[1][0]&&areaPartida[1][2]==areaPartida[1][0]){
            return true;
        }else if (areaPartida[2][0]!='x'&&areaPartida[2][1]==areaPartida[2][0]&&areaPartida[2][2]==areaPartida[2][0]){
            return true;
        }else {
            return false;
        }
    }else 
   
        if (areaPartida[0][0]!='o'&&areaPartida[0][1]==areaPartida[0][0]&&areaPartida[0][2]==areaPartida[0][0]){
            return true;
        }else if (areaPartida[0][0]!='o'&&areaPartida[1][0]==areaPartida[0][0]&&areaPartida[2][0]==areaPartida[0][0]){
            return true;
        }else if (areaPartida[0][0]!='o'&&areaPartida[1][1]==areaPartida[0][0]&&areaPartida[2][2]==areaPartida[0][0]){
            return true;
        }else if (areaPartida[0][2]!='o'&&areaPartida[1][2]==areaPartida[0][2]&&areaPartida[2][2]==areaPartida[0][2]){
            return true;
        }else if (areaPartida[0][2]!='o'&&areaPartida[1][1]==areaPartida[0][2]&&areaPartida[2][0]==areaPartida[0][2]){
            return true;
        }else if (areaPartida[0][1]!='o'&&areaPartida[1][1]==areaPartida[0][1]&&areaPartida[2][1]==areaPartida[0][1]){
            return true;
        }else if (areaPartida[1][0]!='o'&&areaPartida[1][1]==areaPartida[1][0]&&areaPartida[1][2]==areaPartida[1][0]){
            return true;
        }else if (areaPartida[2][0]!='o'&&areaPartida[2][1]==areaPartida[2][0]&&areaPartida[2][2]==areaPartida[2][0]){
            return true;
        }else {
            return false;
        }

}