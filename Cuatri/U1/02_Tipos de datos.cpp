/* Unidad 1. Tipos de datos
    Autor: Paulina Jaquelin Alvarez Martinez
    Fecha: 16/09/2022
    Descripción: Muestra los diferentes tipos de datos en c++
*/

//Libreria para el manejo de entradas y salidas de pantalla
#include <iostream>
//LIbreria para el uso de printf y scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero 
int main ()
{
    //Mas informacion en:
    //https://www.geeksforgeeks.org/c-data-types/
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;

    cout << "Este programa muestra los tipo de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "El numero flotante es: " <<flotante << endl;
    cout << "El tamaño del flotante es: " << sizeof(flotante) << "bytes" << endl;
    cout << "El numero doble es: " << grande << endl;
    cout << "El tamaño del doble es: " << sizeof(grande) << "bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof(caracter) << "bytes" << endl;

    cout << "===============" << endl;

    //Mas informacion en:
    //https://cplusplus.com/reference/cstdio/printf/
    printf("Usamos la funcion printf\n");
    printf("El numero entero es: %i \n", entero);
    printf("El numero flotante es: % 3.1f\n, flotante");

    //Al ser una funcion debe retornar un valor, en este caso 0
    return 0;
}