/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 13/10/2022
    Description: Shows the bisection method  
*/
// Input/output library between the screen n' keyboard
#include <iostream>
#include <cmath>

// Using namespace to avoid std
using namespace std;

float solveEquation(float value){
    // With the ecuation x^2+3x+8
    return pow(value, 2)+3*(value)+8;
}
// Main funtion 
int main(){
    cout << "What is the value of A? ";
    cin >> a;
    cout << "What is the value of B? ";
    cin >> b;
    float c= (a+b)/2;
    float ya= solveEquation (a);
    float yb= solveEquation (b);
    float yc= solveEquation (c);

}