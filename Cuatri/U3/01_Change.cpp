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
void getChange(int);
void getCoins(int);
void displayChange(string);
void displayCoins(string);

//Declaration of global variables so that any function can call it 
int quinientos=0, docientos=0, cien=0;
int cincuenta=0, veinte=0;
int diez=0, cinco=0, dos=0, uno=0;
int residue;

//Main funtion
int main(){
    int amount;
    string option;
    cout << "Enter your amount: ";
    cin >> amount;
    cout << "Please choose an option to break down your amount" << endl;
    cout << "Select a option:" << endl << "a)Bills and coins" << endl << "b)Only coins" << endl;
    cin>> option;
    if (option=="a"){

        getChange(amount);
        displayChange("Your change is:");
    }
    else if (option=="b"){
        getCoins(amount);
        displayCoins("Your change is:");
    }else 
        cout << "Please select other option valid" <<endl;
    return 0;
}

int doCalculate(int quantity, int amount)
{
    int result;
    result=amount/quantity;
    residue=amount%quantity;
    amount=residue;
    return result;
}

void getChange(int amount){
    quinientos= doCalculate(500,amount);
    docientos= doCalculate(200,residue);
    cien= doCalculate(100,residue);
    cincuenta= doCalculate(50,residue);
    veinte= doCalculate(20,residue);
    diez= doCalculate(10,residue);
    cinco= doCalculate(5,residue);
    dos= doCalculate(2,residue);
    uno= doCalculate(1,residue);
}

void getCoins(int amount){
    diez=doCalculate(10,amount);
    cinco=doCalculate(5,residue);
    dos=doCalculate(2,residue);
    uno=doCalculate(1,residue);
}

void displayChange(string){
    cout << "Your change is: "<< endl;
    cout << "$500= " << quinientos << endl << "$200= " << docientos << endl <<"$100= " << cien << endl << "$50= " << cincuenta << endl <<"$20= " << veinte << endl << "$10= " << diez << endl 
    << "$5= " << cinco << endl << "$2= " << dos << endl << "$1= " << uno << endl;
}

void displayCoins(string){
    cout << "Your change is: "<<endl;
    cout << "$10= " << diez << endl << "$5= " << cinco << endl << "$2= " << dos << endl << "$1= " << uno << endl;
}