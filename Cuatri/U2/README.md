## Unidad 2. Conditionals

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

### Exercise 1. Income

The tax brackets for the income tax return in a given country are as follows:

   Income Tax rate
   - Less than $10,000 5%.
   - Between $10,000 and $20,000 15%.
   - Between $20,000 and $35,000 20%.
   - Between $35,000 and $60,000 30%.
   - More than $60,000 45% 


<div style="text-align: justify"> 
Write a program that asks the user for his annual income and displays on the screen the 
the corresponding tax rate on the screen. </div>

#### Code

```c++
//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;


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
    //The flags are to detect a possible error, in this case if the flag is 1 it prints "error", otherwise it performs the corresponding operations.
    else
    {

        flag = 1;
    }
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
 
In a given company, its employees are evaluated at the end of each year.
The points they can obtain in the evaluation start at 0.0 and can increase,
and can be translated into better benefits. The points that employees can earn can be 0.0, 0.4
can be 0.0, 0.4, 0.6 or more, but not values in between. A
The table below shows the levels corresponding to each score. The
amount of money earned at each level is $2,400 multiplied by the level's score.
score of the level.  

		
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
    //If the user did not obtain a score among the desired ones, the following will be printed
    else 
    cout << "Your percentage isnt exist" << endl;
    
    return 0;
}
```
#### Testing

Score of 0.0:

<img alt="c++" height="50" src="/imagenes/score 0.0.png"/>

Score of 0.4:

<img alt="c++" height="50" src="/imagenes/score 0.4.png"/>

Score of 0.6:

<img alt="c++" height="50" src="/imagenes/score 0.6.png"/>

Score of 0.7:

<img alt="c++" height="50" src="/imagenes/score 0.7.png"/>

Score of 0.5:

<img alt="c++" height="50" src="/imagenes/score 0.5.png"/>

### Exercise 3. Ages

Write a program for a company that has arcades for all ages and wants to automatically calculate the price that the user will receive.
wants to automatically calculate the price it should charge its customers to enter. The
program should ask the user for the age of the customer and display the price of admission. If
the customer is under 4 years old can enter for free, if he is between 4 and 18 years old he must pay $5 and if he is over 18 years old, $10.
if over 18, $10. 

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
    else if (age>=4 && age <18){
        cout << "You must pay $5" << endl;
    }
    else 
    cout << "You must pay $10" << endl;

    return 0;
}
```
#### Testing

3 years old:

<img alt="c++" height="40" src="/imagenes/edad de 3.png"/>

4 years old:

<img alt="c++" height="40" src="/imagenes/edad de 4.png"/>

18 years old:

<img alt="c++" height="40" src="/imagenes/edad de 18.png"/>

### Exercise 4. Pizzas
 
<br>Pizzeria Bella Napoli offers vegetarian and non-vegetarian pizzas to its customers. The
ingredients for each type of pizza are listed below. <br>


<br>1. Vegetarian ingredients: Pepperoni and tofu. <br>
<br>2. Non-vegetarian ingredients: Pepperoni, Ham and Salmon. <br>


Write a program that asks the user if he wants a vegetarian pizza or not, and depending on his answer, shows him a
Depending on his answer, show him a menu with the available ingredients for him to choose from.
Only one topping can be chosen in addition to the mozzarella and tomato that are on all the pizzas.
pizzas.
At the end of the screen it should be shown whether the chosen pizza is vegetarian or not and all the toppings included.
ingredients it contains.

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
    //Choice of vegetarian pizza menu
    if (pizza== 1){
        cout << "Vegetarian ingredients are: Bell pepper and tofu" << endl;
        cout << "1. Bell pepper" << endl;
        cout << "2. Tofu" << endl;
        cout <<"What ingredient do you want? " << endl;
        cin >> ingredient;
        //Choice of vegetarian pizza ingedients
        if (ingredient==1){
            cout << "You pizza is vegetarian with bell pepper, mozarella and tomato" << endl;
        }
        else if (ingredient==2){
            cout << "You pizza is vegetarian with tofu, mozarella and tomato" << endl;
        }
    }
    //Choice of not vegtsrian pizza menu
    if (pizza==2){
        cout << "Not vegetarian ingredients are: Peperoni, Ham and Salmon" << endl;
        cout << "1. Peperoni" << endl;
        cout << "2. Ham" << endl;
        cout << "3. Salmon" << endl;
        cout << "What ingredient do you want? " << endl;
        cin >> ingredient;
        //Choice of not vegetarian pizza ingedients
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
    //Thank you to the customer for your purchase
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

### Exercise 5. Temperature
 
Make a program in which you enter 6 temperatures and determine the average, the lowest and the highest temperature.
and the highest.

#### Code 

```c++
//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;


//Main funtion of the float type
int main(){
        //Declaration of variables 
    float temperature, sum=0;
    int temMax=0, temMin=9999;
        //6-temperature testing 
    for (int i=1;i<=6;i++){
        cout << "Enter the temperature to evaluate: ";
        cin >> temperature;
        sum=sum+temperature;
        if (temperature<=temMin)
            temMin=temperature;
        if (temperature >=temMax)
            temMax=temperature;
    }
        //Printout of averaged temperature results and their comparison 
    cout << "The average of the temperatures is: " << sum/6 <<  endl;
    cout << "The lowest temperature is: " << temMin << endl;
    cout << "The hightest temperature is: " << temMax << endl;

    return 0;
}
```

#### Testing 

Average and comparison (lowest and highest temperature) between the 6 given user temperatures:

<img alt="c++" height="120" src="/imagenes/temperatures.png"/>


### Exercise 6. Quantity

To create a program that reads indefinitely quantities of products and their price, and at the end of the program it
and at the end indicates the total of the invoice. To know that the purchase has been completed, a 0 must be entered in the quantity. Enter a 0 in the quantity.

#### Code 

```c++
//Input/output library between the screen n' keyboard
#include <iostream>

//Using namespace to avoid std
using namespace std;


//Main funtion of type double and integer
int main(){
        //Declaration of variables
    double price, totalAccount=0,total;
    int sold;
        //Sum of the total number of products purchased according to price 
    do {
        cout << "Enter the quantity sold: ";
        cin >> sold;
        if (sold>0){
            cout << "Enter the price of the item: ";
            cin >> price;
            total=(sold*price);
            totalAccount=totalAccount + total;
        }
        //The price variable is reset to 0, to indicate that the user is finished with the purchase. 
        price = 0;
        }while ((sold!=0 ) || (price !=0));
        //The result is printed to the user 
        cout << "Finalizing the invoice" << endl;
        cout << "The total account is: " << "$" <<  totalAccount << endl;
    return 0;
}
```
#### Testing

Invoice total according to quantity of products purchased:

<img alt="c++" height="120" src="/imagenes/sold.png"/>

### Exercise 7. Binary

Make a program that performs the conversion from binary to decimal, only for integers greater than 0.
integers greater than 0. The result can be displayed as an integer variable or as a character set.
set of characters.

#### Code 

```c++
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
             //Printout of the result in binary 
    cout << "The number in binary is: " << result << endl;
        }
        else if (number == 0)
        {
        cout << "Please enter a number above 0" <<endl;
        }

        // Line break
        cout << "\n";
    } while (number < 0);

    //As a function it must return to a value, in this case 0
    return 0;
}
```
#### Testing 

Conversion from decimal to binary of 188:

<img alt="c++" height="50" src="/imagenes/binary.png"/>

If the user enters a 0:

<img alt="c++" height="40" src="/imagenes/binary error.png"/>

### Exercise 8. Multiplication table 

Make a program that gives a multiplication table according to the user's choice 

#### Code 

```c++
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
```
#### Testing 

Table from 5 to 12:

<img alt="c++" height="200" src="/imagenes/table of 5.png"/>

Table from 3 to 14:

<img alt="c++" height="250" src="/imagenes/table of 3.png"/>

### Exercise 9. Bisection

Make a program that gives a multiplication table according to the user's choice 

#### Code 

```c++
```
#### Testing 


<img alt="c++" height="140" src="/imagenes.png"/>


![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
