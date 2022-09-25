/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 22/09/2022
    Description: Displays the tax rate according to your annual income

    The tax brackets for the income tax return in a given country are as follows:

    Income Tax rate
    Less than $10,000 5%.
    Between $10,000 and $20,000 15%.
    Between $20,000 and $35,000 20%.
    Between $35,000 and $60,000 30%.
    More than $60,000 45% 

    Write a program that asks the user for his annual income and displays on the screen the 
    the corresponding tax rate on the screen.      
*/

#include <iostream>
using namespace std;

int main (){
        //Declaration of variables
    int income;
    float income1, totalAmountdue,tax, tax1;
        //Ask the user your income
    cout << "Enter your annual income: $"; 
    cin >> income;
        //Assess the user's income to obtain the percentage to be paid
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
        //Calculate total amount due the user with your tax
    tax1= tax*100;
    cout << "Your tax is: " << tax1 << "%" << endl;
    income1=(income*tax);
    totalAmountdue=(income-income1);
        //Show the user your total amount due
    cout << "Your total amount due is: " << "$" << totalAmountdue << endl;
    return 0;
}