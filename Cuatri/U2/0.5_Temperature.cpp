/*
    Unit 2. Conditionals
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
    float temperature, sum=0;
    for (int i=1;i<=6;i++){
        cout << "Enter the temperature to evaluate: ";
        cin >> temperature;
        sum=sum+temperature;
    }
    if (temperature<temperature){
        cout << "The lowest temperature is: " << temperature << endl;
        }else
        cout << "The highest temperature is: " << temperature << endl;
    sum=sum/6;
    cout << "The average of the temperatures is: " << sum <<  endl;
}