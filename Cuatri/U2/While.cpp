/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 22/09/2022
    Description: Show the use of while sentence
*/

//input/output library between the screen n' keyboard
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int contador;
   //Inicialización del contador, inicia en 1
   contador = 1;
   
   while (contador <= 15){
    //Imprime el valor del contador
    cout << "El contador es: " << contador << endl;

    //Incremento del contador, si no se incrementa el ciclo se mantiene indefinidamente
    contador++;
   }
   

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}