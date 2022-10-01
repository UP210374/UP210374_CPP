## Unidad 2. Conditionals

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

### Exercise 1. Income

#### Section for tax selection

The tax brackets for the income tax return in a given country are as follows:

   Income Tax rate
   - Less than $10,000 5%.
   - Between $10,000 and $20,000 15%.
   - Between $20,000 and $35,000 20%.
   - Between $35,000 and $60,000 30%.
   - More than $60,000 45% 

Write a program that asks the user for his annual income and displays on the screen the 
the corresponding tax rate on the screen

#### Code

```c++
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
    else
    {

        flag = 1;
    }

        // error handler
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

```

#### Testing

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

### Section for the benefit of your score
 
<div style="text-align: justify"> 
In a given company, its employees are evaluated at the end of each year.
The points they can obtain in the evaluation start at 0.0 and can increase,
and can be translated into better benefits. The points that employees can earn can be 0.0, 0.4
can be 0.0, 0.4, 0.6 or more, but not values in between. A
The table below shows the levels corresponding to each score. The
amount of money earned at each level is $2,400 multiplied by the level's score.
score of the level.  </div> \

		
| Level | Score |
--- | --- 
Unacceptable |  0.0
Acceptable |  0.4
Meritorious |  0.6 or higher


Write a program that reads the user's score and indicates his performance level,
as well as the amount of money the user will receive.

#### Code 

```c++
//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;

//Main funtion of type enteger and double
int main (){
    double bonus, score;
    int percentage;
    //ask the user you score
    cout << "Enter your score: ";
    cin >> score;
    //evaluation of the user's score so that you know what your bonus is
    if (score==0.0 || score==0.4 || score>=0.6){
        percentage=score*100;
        bonus=score*2400;
        cout << "Your percentage obtain in evaluetion is: " << percentage << "%" << endl;
        cout << "Your bonus is: " <<"$"<< bonus << endl;
    }
    
    else 
    cout << "Your percentage isnt exist" << endl;
    
    return 0;
}
```
#### Testing

Score of 0.0:

<img alt="c++" height="70" src="/imagenes/score 0.0.png"/>

Score of 0.4:

<img alt="c++" height="70" src="/imagenes/score 0.4.png"/>

Score of 0.6:

<img alt="c++" height="70" src="/imagenes/score 0.6.png"/>

Score of 0.7:

<img alt="c++" height="70" src="/imagenes/score 0.7.png"/>

Score of 0.5:

<img alt="c++" height="70" src="/imagenes/score 0.5.png"/>

### Exercise 3. Ages

#### Section to know when you pay according to your age 

<div style="text-align: justify"> 
Write a program for a company that has arcades for all ages and wants to automatically calculate the price that the user will receive.
wants to automatically calculate the price it should charge its customers to enter. The
program should ask the user for the age of the customer and display the price of admission. If
the customer is under 4 years old can enter for free, if he is between 4 and 18 years old he must pay $5 and if he is over 18 years old, $10.
if over 18, $10. </div>

#### Code 

```c++
//Input/output library between the screen n' keyboard
#include<iostream>

//Using namespace to avoid std
using namespace std;

int main(){
    int age;
    //ask the user your age
    cout << "How old are you? ";
    cin >> age;
    //age assessment to find out how much you are going to pay 
    if (age<4){
        cout << "Suertudote, you can enter for free" << endl;
    }
    else if (age>=4 && age<18){
        cout << "You must pay $5" << endl;
    }
    else 
    cout << "You must pay $10" << endl;

    return 0;
}
```
#### Testing

3 years old:

<img alt="c++" height="60" src="/imagenes/edad de 3.png"/>

4 years old:

<img alt="c++" height="60" src="/imagenes/edad de 4.png"/>

18 years old:

<img alt="c++" height="60" src="/imagenes/edad de 18.png"/>

### Exercise 4. Pizzas

#### Section for pizza selection

<div style="text-align: justify"> 
Pizzeria Bella Napoli offers vegetarian and non-vegetarian pizzas to its customers. The
ingredients for each type of pizza are listed below. </div>
1. Vegetarian ingredients: Pepperoni and tofu. <br>
1. Non-vegetarian ingredients: Pepperoni, Ham and Salmon. <br>
<div style="text-align: justify"> 
Write a program that asks the user if he wants a vegetarian pizza or not, and depending on his answer, shows him a
Depending on his answer, show him a menu with the available ingredients for him to choose from.
Only one topping can be chosen in addition to the mozzarella and tomato that are on all the pizzas.
pizzas.
At the end of the screen it should be shown whether the chosen pizza is vegetarian or not and all the toppings included.
ingredients it contains.</div>

#### Code 

```c++
//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;

int main(){
    int pizza, ingredient;
    //ask the user about which pizza wants
    cout << "Welcome to Bella Napoli pizzas" << endl;
    cout <<"Which pizza do you want to order? " << endl;
    cout <<"To select which pizza you prefer, select a 1 or a 2" << endl; 
    cout << "1. vegetarian" << endl;
    cout <<"2. Not vegetarian" << endl;
    cin >> pizza;
    //vegetarian pizza
    if (pizza== 1){
        cout << "Vegetarian ingredients are: Bell pepper and tofu" << endl;
        cout << "1. Bell pepper" << endl;
        cout << "2. Tofu" << endl;
        cout <<"What ingredient do you want? " << endl;
        cin >> ingredient;
        //vegetarian pizza ingedients
        if (ingredient==1){
            cout << "You pizza is vegetarian with bell pepper, mozarella and tomato" << endl;
        }
        else if (ingredient==2){
            cout << "You pizza is vegetarian with tofu, mozarella and tomato" << endl;
        }
    }
    //not vegtsrian pizza
    if (pizza==2){
        cout << "Not vegetarian ingredients are: Peperoni, Ham and Salmon" << endl;
        cout << "1. Peperoni" << endl;
        cout << "2. Ham" << endl;
        cout << "3. Salmon" << endl;
        cout << "What ingredient do you want? " << endl;
        cin >> ingredient;
        //not vegetarian pizza ingedients
        if (ingredient==1){
            cout << "You pizza isn´tvegetarian with peperoni, mozarella and tomato"<< endl;
        }
        else if (ingredient==2){
            cout << "You pizza isn´t vegetarian with ham, mozarella and tomato"<< endl;
        }
        else if (ingredient==3){
            cout << "You pizza isn´t vegetarian with salmon, mozarella and tomato"<<endl;
        }
        cout << "Thank you for visiting Bella Napoli pizzas :D" << endl;
    }
    else 
    //thank you to the customer for your purchase
    cout << "Thank you for visiting Bella Napoli pizzas :D"<< endl;
    return 0;
}
```
#### Testing

Vegetarian with bell pepper, mozarella and tomato:

<img alt="c++" height="150" src="/imagenes/vegetariana con bell pepper.png"/>

Vegetarian with tofu, mozarella and tomato:

<img alt="c++" height="150" src="/imagenes/vegetariana con tofu.png"/>

No vegetarian with peperoni, mozarella and tomato:

<img alt="c++" height="150" src="/imagenes/no vegetariana con peperoni.png"/>

No vegetarian with ham. mozarella and tomato:

<img alt="c++" height="150" src="/imagenes/no vegetariana con ham.png"/>

No vegetarian with salmon, mozarella and tomato:

<img alt="c++" height="150" src="/imagenes/no vegetariana con salmon.png"/>


![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
