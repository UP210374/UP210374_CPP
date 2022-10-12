/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 12/10/2022
    Description:
*/
// Input/output library between the screen n' keyboard
#include <iostream>

// Using namespace to avoid std
using namespace std;

// Main funtion of integer type

int main()
{
    int table, number;
    cout << "Which board do you want? ";
    cin >> number;
    cout << "Up to what number do you want your multiplication table? ";
    cin >> table;
    cout << "Your table is: " << number << endl;
    for (int i = 1; i <= table; i++)
    {
        for (int j = 1; j <=40; j++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "|" << i << "\t" << "x" << "\t" << number << "\t" << "=" << "\t" << i*number << "\t" << "|" << endl;   
    }
    for (int l=1; l<=40; l++){
            cout << "-";
        }
    cout << endl;
    return 0;
}