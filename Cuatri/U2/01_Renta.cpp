/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 22/09/2022
    Description: Displays the tax rate according to your annual income 
*/

#include <iostream>
using namespace std;

int main (){
    int income;
    float income1, totalAmountdue,tax, tax1;
    cout << "Enter your annual income: $";
    cin >> income;
    if (income>0 && income<10000){
        tax=0.05;
    }
        else if (income >= 10000 && income<20000){
            tax=0.15;
    }
    else if (income >=20000 && income<35000){
            tax= 0.20;
    }
    else if (income>=35000 && income<=60000){
            tax=0.35;
    }
    else if (income>60000){
            tax=0.45;
    }
    tax1= tax*100;
    cout << "Your tax is: " << tax1 << "%" << endl;
    income1=(income*tax);
    totalAmountdue=(income-income1);
    cout << "Your total amount due is: " << "$" << totalAmountdue << endl;
    return 0;
}