/*
    Unit 2. Conditionals 
    Author: Paulina Jaquelin Alvarez Martínez 
    Date: 26/09/2022
    Description: Shows your bonus according to your percentage n
*/

//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;

//Main funtion of type enteger and double
int main (){
    double bonus, score;
    int percentage;
    //ask the user you score
    cout << "Enter your score: ";
    cin >> score;
    //evaluation of the user's score so that you know what your bonus is
    if (score==0.0 || score==0.4 || score>=0.6){
        percentage=score*100;
        bonus=score*2400;
        cout << "Your percentage obtain in evaluetion is: " << percentage << "%" << endl;
        cout << "Your bonus is: " <<"$"<< bonus << endl;
    }
    
    else 
    cout << "Your percentage isnt exist" << endl;
    
    return 0;
}
    
