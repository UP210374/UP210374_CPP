/*
    Unidad 1. Entrada de datos
    Autor: Paulina Jaquelin Alvarez Martinez
    Fecha: 21/09/2022
    Descripcion: MUestra la forma de ingresar tipos de datos por el usuario
*/

//Libreria para maenjo de entradas t salida de pantalla
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>

//Uso de namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero 
int main (){
    //Mas informacion en: 
    //https://www.geeksforgeeks.org/c-data-types/
    int entero;
    float flotante;
    double grande;
    char caracter;

    cout << "Este programa mustra el ingreso de datos para el susario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato que ingreso es: " << entero << endl;
    
    //Mas infomracion en:
    //https://cplusplus.com/reference/cstdio/printf/
    printf ("Usando la funcion printf y scanf\n");
    printf ("Ingresa un dato de tipo entero: ");
    scanf ("%", &entero);
    printf ("El dato ingresado es: %i \n", entero);

    //Al ser una funcion debe retornar un valor, en este caso 0
    return 0;

    }