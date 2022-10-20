/*
Author: Paulina Jaquelin Alvarez Martinez 
Date: 20/10/2022
Description: Shows the creation and handling of functions
*/

/* Funtion:
    type name(type var1, type var2,...type varn){
        instrucciones;
    }
*/

#include <iostream>

using namespace std;

//Prototipado de funciones
int getMaxVal(int num1, int num2);

//Función principal
int main(){
    int num1, num2;
    int valorMaximo;

    cout << "Dame un número: ";
    cin >> num1;
    cout << "Dame otro número: ";
    cin >> num2;

    valorMaximo =getMaxVal(num1, num2);

    cout << "El valor máximo es: " << valorMaximo << endl;
    return 0;
}

int getMaxVal(int num1, int num2){
    return (num1 > num2)?num1:num2;
}