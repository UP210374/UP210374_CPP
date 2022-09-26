/*
    Unit 2. Conditionals 
    Author: Paulina Jaquelin Alvarez Martínez 
    Date: 26/09/2022
    Description: Show your 

    In a given company, its employees are evaluated at the end of each year. 
    The points they can obtain in the evaluation start at 0.0 and can increase, 
    and can increase, resulting in better benefits. The points that employees can earn can be 0.0, 0.0 
    0.0, 0.4, 0.6 or more, but not values in between. 
    between the above-mentioned figures. Below is a table with the levels corresponding to each score. 
    levels corresponding to each score is shown below. The amount of money earned
    in each level is $2,400 multiplied by the level score.

    Level Score
    Unacceptable 0.0
    Acceptable 0.4
    Meritorious 0.6 or higher
    Write a program that reads the user's score and indicates his or her level of performance, 
    as well as the amount of money the user will receive.
    *Thank you very much for choosing us! We look forward to serving you again.

    Translated with www.DeepL.com/Translator (free version)

*/
#include <iostream>
using namespace std;

int main (){
    double bonus, score;
    int percentage;
    cout << "Enter your score: ";
    cin >> score;
    if (score==0.0 && score==0.4 && score>=0.6){
        percentage=score*100;
        cout << "Your percentage obtain in evaluetion is: " << percentage << "%" << endl;
        cout << "Your bonus is: " <<"$"<< bonus << endl;
    }
    
    else 
    cout << "Your percentage isn´t exist";
    
    return 0;
}
    
