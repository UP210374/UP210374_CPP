/*
    Unit 2. 
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 12/10/2022
    Description: Displays the desired multiplication table 
*/

// Input/output library between the screen n' keyboard
#include <iostream>

// Using namespace to avoid std
using namespace std;

// Main funtion of integer type

int main()
{
    int table, number;
    //Asks the user which multiplication table he/she is interested in and up to which number he/she wants his/her table. 
    cout << "Which board do you want? ";
    cin >> number;
    cout << "Up to what number do you want your multiplication table? ";
    cin >> table;
    cout << "Your table is: " << number << endl;
    //Cycle to perform multiplications with a container 
    for (int i = 1; i <= table; i++)
    {
        //Cycle to place the separator lines of the table 
        for (int j = 1; j <=40; j++)
        {
            cout << "-";
        }
        //Printout of the result to the user 
        cout << endl;
        cout << "|" << i << "\t" << "x" << "\t" << number << "\t" << "=" << "\t" << i*number << "\t" << "|" << endl;   
    }
    //Cycle to place end separator lines to tables 
    for (int l=1; l<=40; l++){
            cout << "-";
        }
    cout << endl;
    return 0;
}