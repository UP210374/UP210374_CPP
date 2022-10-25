/*
Author: Paulina Jaquelin Alvarez Martinez 
Date: 24/10/2022
Description: Itemizes an amount determined by the user 
*/
#include<iostream>
using namespace std;

int doCalculate(int quantity, int amount)
{
    int result;
    result=amount/quantity;
    return result;
}

void getChange(int );
void getCoins(int);
void displayChange(string);

int quinientos=0, docientos=0, cien=0;
int cincuenta=0, veinte=0;
int diez=0, cinco=0, dos=0, uno=0;

int main(){
    int amount;
    cout << "Enter your amount: ";
    cin >> amount;

    getChange(amount);
   

    return 0;
}

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

    cout << "$500= " << quinientos << endl << "$200= " << docientos << endl <<"$100= " << cien << endl << "$50= " << cincuenta << endl <<"$20= " << veinte << endl << "$10= " << diez << endl << "$5= " << cinco << endl << "$2= " << dos << endl << "$1= " << uno << endl;
}