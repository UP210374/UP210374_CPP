/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 07/10/2022
    Description: Gives the conversion from decimal to binary 
*/

//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;


//Main funtion of type string and integer

int main()
{
    int number;
    string result;
    //Ask the user for the number to be converted from decimal to binary 
    cout << "Entry a number decimal: ";
    cin >> number;
    //Division of the decimal coefficients by two by adding each result, where the remainder is a 1 and the remainder is 0. 
    do
    {
        if (number > 0)
        {
            while (number != 0)
            {
                result = (number % 2 == 0) ? "0" + result : "1" + result;

                number /= 2;
            }
        }
        else if (number == 0)
        {
            cout << "Greater than 0";
        }

        // Line break
        cout << "\n";
    } while (number < 0);
    //Printout of the result in binary 
    cout << "The number in binary is: " << result << endl;
    return 0;
}
    