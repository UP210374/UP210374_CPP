## Unidad 2. Conditionals

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

##### Exercise 1. Income

Section for tax selection

The tax brackets for the income tax return in a given country are as follows:

   -Income Tax rate
   -Less than $10,000 5%.
   -Between $10,000 and $20,000 15%.
   -Between $20,000 and $35,000 20%.
   -Between $35,000 and $60,000 30%.
   -More than $60,000 45% 

 Write a program that asks the user for his annual income and displays on the screen the 
 the corresponding tax rate on the screen

Code

```c++
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
            tax=0.30;
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
```

Explanation

What this program does is to ask for the annual rent from the owner of the house to evaluate in which range is the price given by the user. 
the price range given by the user and then with nested if's it can determine what the respective 
which will be the respective percentage of your tax.

As a result it gives the rent, percentage and sum of the rent and the rent percentage.

Tests 

Amount of $3500:

<img alt="c++" height="100" src="/imagenes/prueba1.png"/>

Amount of $15000:

<img alt="c++" height="100" src="/imagenes/prueba2.png"/>

Amoutn of $30000:

<img alt="c++" height="100" src="/imagenes/prueba3.png"/>

Amount of $45000:

<img alt="c++" height="100" src="/imagenes/prueba4.png"/>

Amount of $70000:

<img alt="c++" height="100" src="/imagenes/prueba5.png"/>

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
