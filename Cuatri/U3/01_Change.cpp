/*
Author: Paulina Jaquelin Alvarez Martinez 
Date: 24/10/2022
Description: Itemizes an amount determined by the user 
*/

//Input/output library between the screen n' keyboard
#include<iostream>
//Using namespace to avoid std
using namespace std;

//Function prototyping 
int doCalculate(int);
void getChange(int );

//Declaration of global variables so that any function can call it 
int quinientos=0, docientos=0, cien=0;
int cincuenta=0, veinte=0;
int diez=0, cinco=0, dos=0, uno=0;

//Main funtion of type enteger
int main(){
    int amount;
    //Ask the user for the amount to be itemized 
    cout << "Enter your amount: ";
    cin >> amount;
    //The function that performs the procedure is called to break down the amount to avoid repeating lines in the code. 
    getChange(amount);
    //As a function it must return to a value, in this case 0
    return 0;
}

//Function that performs the calculation to determine the amount required in each type of banknote or currency 
int doCalculate(int quantity, int amount)
{
    int result;
    result=amount/quantity;
    return result;
}

//This function calls the previous function to perform the calculation of the residue that is obtained, leaving at the same time the amount of milletes or coins that are required to break it down and print it to the user.
void getChange(int amount){
    
    quinientos= doCalculate(500,amount);
    amount=amount%500;
    docientos= doCalculate(200,amount);
    amount=amount%200;
    cien= doCalculate(100,amount);
    amount=amount%100;
    cincuenta= doCalculate(50,amount);
    amount=amount%50;
    veinte= doCalculate(20,amount);
    amount=amount%20;
    diez= doCalculate(10,amount);
    amount=amount%10;
    cinco= doCalculate(5,amount);
    amount=amount%5;
    dos= doCalculate(2,amount);
    amount=amount%2;
    uno= doCalculate(1,amount);
    amount=amount%1;

    cout << endl;
    cout << "Your change is: "<< endl;
    cout << "$500= " << quinientos << endl << "$200= " << docientos << endl <<"$100= " << cien << endl << "$50= " << cincuenta << endl <<"$20= " << veinte << endl << "$10= " << diez << endl 
    << "$5= " << cinco << endl << "$2= " << dos << endl << "$1= " << uno << endl;
}