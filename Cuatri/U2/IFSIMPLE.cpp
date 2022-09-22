/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 22/09/2022
    Description: Show the use of if simple
*/
#include <iostream>

using namespace std;
int main () {
    int number;
    int data=1;

    cout << "Enter a number integer: ";
    cin >> number;
    if (number > data){
         cout << "The number greater than data" << endl;
    }
    // Exercises: Try the diferents comparisons ==, !=, <, >, <=, >=
return 0;
}