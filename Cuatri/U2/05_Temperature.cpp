/*
    Unit 2.
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 01/10/2022
    Description: Shows the average temperatures and which is the lowest and which is the highest
*/

//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;


//Main funtion of the float type
int main(){
        //Declaration of variables 
    float temperature, sum=0;
    int temMax=0, temMin=9999;
        //6-temperature testing 
    for (int i=1;i<=6;i++){
        cout << "Enter the temperature to evaluate: ";
        cin >> temperature;
        sum=sum+temperature;
        if (temperature<=temMin)
            temMin=temperature;
        if (temperature >=temMax)
            temMax=temperature;
    }
        //Printout of averaged temperature results and their comparison 
    cout << "The average of the temperatures is: " << sum/6 <<  endl;
    cout << "The lowest temperature is: " << temMin << endl;
    cout << "The hightest temperature is: " << temMax << endl;

    return 0;
}