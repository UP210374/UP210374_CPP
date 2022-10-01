/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 28/09/2022
    Description: Shows the amount to be paid to enter the gaming room according to your age. 

*/

//Input/output library between the screen n' keyboard
#include<iostream>

//Using namespace to avoid std
using namespace std;

int main(){
    int age;
    //ask the user your age
    cout << "How old are you? ";
    cin >> age;
    //age assessment to find out how much you are going to pay 
    if (age<4){
        cout << "Suertudote, you can enter for free" << endl;
    }
    else if (age>=4 && age <18){
        cout << "You must pay $5" << endl;
    }
    else 
    cout << "You must pay $10" << endl;

    return 0;
}