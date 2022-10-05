/*
    Unit 2. Conditionals
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 05/10/2022
    Description: Shows
*/

//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;


//Main funtion of type double and integer
int main(){
        //Declaration of variables
    double price, totalAccount=0,total;
    int sold;
        //
    do {
        cout << "Enter the quantity sold: ";
        cin >> sold;
        if (sold>0){
            cout << "Enter the price of the item: ";
            cin >> price;
            total=(sold*price);
            totalAccount=totalAccount + total;
        }
    } while ((sold !=0 )|| (price !=0));
        cout << "Finalizing the invoice" << endl;
        cout << "The total account is: " << "$" <<  totalAccount << endl;
    return 0;
}
    