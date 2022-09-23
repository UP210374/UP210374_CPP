/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 22/09/2022
    Description: Displays the tax rate according to your annual income 
*/

#include <iostream>
using namespace std;

int main (){
    int income, income1, totalAmountdue;
    cout << "Enter your annual income: ";
    cin >> income;
    if (income<10000){
        income1=(income*0.05);
        totalAmountdue=(income-income1);
        cout << "Your total amount due is: " << totalAmountdue << endl;
    }
    else if (income >= 10000 && income<20000){
            income1=(income*0.15);
            totalAmountdue=(income-income1);
            cout << "Your total amount due is: " << totalAmountdue << endl;
    }
    else if (income >=20000 && income<35000){
            income1=(income*0.20);
            totalAmountdue=(income-income1);
            cout << "Your total amount due is: " << totalAmountdue << endl;
    }
    else if (income>=35000 && income<=60000){
            income1=(income*0.35);
            totalAmountdue=(income-income1);
            cout << "Your total amount due is: " << totalAmountdue << endl;
    }
    else if (income>60000){
            income1=(income*0.45);
            totalAmountdue=(income-income1);
            cout << "Your total amount due is: " << totalAmountdue << endl;
    }
    
    return 0;

}