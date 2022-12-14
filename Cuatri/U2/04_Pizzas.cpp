/*
    Unit 2.
    Author: Paulina Jaquelin Alvarez Martinez
    Date: 29/09/2022
    Description: Shows the choice of pizza and its menu
*/

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