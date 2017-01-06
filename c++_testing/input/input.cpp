/*
 * =====================================================================================
 *
 *       Filename:  input.cpp
 *
 *    Description:  Testing input output
 *
 *        Version:  1.0
 *        Created:  01/02/2017 10:19:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arian Suarez (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <iomanip>
using namespace std;

double totalPrice, inputPrice = 0;
string moreItems;

int askForMore(void){

    cout << "Are there more items? y/n" << endl;
    cin >> moreItems;

    if(moreItems == "y"){
        return 1;
    }
    else if(moreItems == "n"){
        return 0;
    }
    else{
        cout << "Not a valid response, please try again" << endl;
        askForMore();
    }
}

typedef struct change{
    int quarters;
    int dimes;
    int nickels;
    int pennies;
} change;

void findCoins(int coins, change& ch){

    ch.quarters = coins/25;
    ch.dimes = coins % 25 / 10;
    ch.nickels = coins % 25 % 10 / 5;
    ch.pennies = coins % 25 % 10 % 5;

}

void printChange(change *ch){

    cout << "Quarters: "<< ch->quarters << endl;
    cout << "Dimes: " << ch->dimes << endl;
    cout << "Nickels: " << ch->nickels << endl;
    cout << "Pennies: " << ch->pennies << endl;
}

int main(){

    float payment = 0;
    float changeDue = 0;
    int coins = 0;
    change ch;


    cout << "Enter price of item:" << endl;
    cin >> inputPrice;
    totalPrice += inputPrice;

    while(askForMore()){
        cout << "Enter price of item:" << endl;
        cin >> inputPrice;
        totalPrice += inputPrice;
    }

    cout << "Entered total price: " << totalPrice << endl;
    cout << "Enter payment: " << endl;
    cin >> payment;
    changeDue = payment - totalPrice;

    cout << "Change due:\nDollars: " << (int)changeDue << endl;
    coins = (changeDue - (int)changeDue) * 100;

    cout << "Coins " << coins << endl;

    findCoins(coins, ch);
    printChange(&ch);

    return 0;
}

