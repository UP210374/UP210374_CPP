## Unidad 2. Conditionals

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

##### Exercise 1. Income

##### Section for tax selection

The tax brackets for the income tax return in a given country are as follows:

   Income Tax rate\
   -Less than $10,000 5%.\
   -Between $10,000 and $20,000 15%.\
   -Between $20,000 and $35,000 20%.\
   -Between $35,000 and $60,000 30%.\
   -More than $60,000 45% \

Write a program that asks the user for his annual income and displays on the screen the 
the corresponding tax rate on the screen

##### Code

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

##### Tests 

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

### Exercise 2. Benefits

###### Section for the benefit of your score
 
<div style="text-align: justify"> 
In a given company, its employees are evaluated at the end of each year.
The points they can obtain in the evaluation start at 0.0 and can increase,
and can be translated into better benefits. The points that employees can earn can be 0.0, 0.4
can be 0.0, 0.4, 0.6 or more, but not values in between. A
The table below shows the levels corresponding to each score. The
amount of money earned at each level is $2,400 multiplied by the level's score.
score of the level.  </div>
			
			| Level | Score |
			--- | --- 
			Unacceptable |  0.0
			Acceptable |  0.4
			Meritorious |  0.6 or higher

Write a program that reads the user's score and indicates his performance level,
as well as the amount of money the user will receive.

##### Code 

```c++
#include <iostream>
using namespace std;

int main (){
    double bonus, score;
    int percentage;
    //ask the user you score
    cout << "Enter your score: ";
    cin >> score;
    //evaluation of the user's score so that you know what your bonus is
    if (score==0.0 && score==0.4 && score>=0.6){
        percentage=score*100;
        cout << "Your percentage obtain in evaluetion is: " << percentage << "%" << endl;
        cout << "Your bonus is: " <<"$"<< bonus << endl;
    }
    
    else 
    cout << "Your percentage isn´t exist";
    
    return 0;
}
```
##### Tests

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
