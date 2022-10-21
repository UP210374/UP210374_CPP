/*
    Unit 2.
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 13/10/2022
    Description: Shows the bisection method to get a root of a graph
*/

// Input/output library between the screen n' keyboard
#include <iostream>
//Complex operations
#include <cmath> 
////Setting the number of decimals
#include <iomanip>

// Using namespace to avoid std
using namespace std;

//Extra function to call inside main funtion when you need it to carry out another process needed for the code inside int main
float solveEquation(float value){
    // With the ecuation x^2+8x+8
    return pow(value, 2)+8*(value)+8;
}
// Main funtion 
int main(){
    int counter=1;
    float a,b,c,ya,yb,yc;
    //Ask the user for the values of a and b indicating which equation is to be performed  
    cout << "This graph is using the formula x²+8x+8" << endl;
    cout << "What is the value of A? ";
    cin >> a;
    cout << "What is the value of B? ";
    cin >> b;
    c= (a+b)/2;
    ya= solveEquation (a);
    yb= solveEquation (b);
    yc= solveEquation (c);

    //Perform multiplications of the result of each equation to see if there is a root between them before doing nothing. 
    if ((yb * ya < 0) || (ya * yc < 0) || (yc * yb < 0)){
    //Table Header
    cout << "| Exercise \t|\t A \t\t|\t B\t\t|\t C \t\t|\t f(A) \t\t\t|\t f(B) \t\t\t|\t f(C) \t\t\t|" << endl;
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << endl;
    
    //Impression of the first data obtained 
    cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|" << endl; 
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << endl;

        while (yc >= 0.01 || yc <= -0.01)
        {
            //Now sets the value of b as the limit and the value of c as half of the portion to be calculated 
            if ((yc > 0 && ya < 0) || (ya > 0 && yc < 0))
            {
                b = c;
            }
            //The same action is performed  but if yb is the opposite sign of yc
            else
            {
                a = c;
            }
            //If point b ends up being point b, the cycle would make an infinite loop
            if (a == b)
            {
                break;
            }
            
            c = (a+b)/2;
            ya = solveEquation(a);
            yb = solveEquation(b);
            yc = solveEquation(c);
            counter++;
            cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|" << endl;
            for (int i = 0; i < 185; i++)
            {
                cout << "-";
            }
            cout << endl;
        }
    cout << "The root is approximately " << setprecision(1) <<  c;
    }
    //If yb and ya were both the same sign
    else 
    {
        cout << "There's no root between the numbers" << endl;
    }
    //As a function it must return to a value, in this case 0
    return 0;
}