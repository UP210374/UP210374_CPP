/*
    Unit 2. 
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 22/09/2022
    Description: Displays the tax rate according to your annual income
*/

//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;


//Main funtion of the enteger type
int main()
{
    // Declaration of variables
    int income;
    int flag = 0;

    float income1, totalAmountdue, tax, tax1;
    // Ask the user your income
    cout << "Enter your annual income: $";
    cin >> income;

    // Assess the user's income to obtain the percentage to be paid
    if (income > 0 && income < 10000)
    {
        tax = 0.05;
    }
    else if (income >= 10000 && income < 20000)
    {
        tax = 0.15;
    }
    else if (income >= 20000 && income < 35000)
    {
        tax = 0.20;
    }
    else if (income >= 35000 && income <= 60000)
    {
        tax = 0.30;
    }
    else if (income > 60000)
    {
        tax = 0.45;
    }
    //The flags are to detect a possible error, in this case if the flag is 1 it prints "error", otherwise it performs the corresponding operations.
    else
    {

        flag = 1;
    }
    if (flag == 0)
    {
        // Calculate total amount due the user with your tax
        tax1 = tax * 100;
        cout << "Your tax is: " << tax1 << "%" << endl;
        income1 = (income * tax);
        totalAmountdue = (income - income1);
        // Show the user your total amount due
        cout << "Your total amount due is: "
             << "$" << totalAmountdue << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    return 0;
}
