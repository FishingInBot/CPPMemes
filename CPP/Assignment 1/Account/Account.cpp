#include <iostream>
#include "Account.h"
using namespace std;

//Constructor for Account, takes balance
Account::Account(double balance){
    this->balance = balance;
}

//debit returns bool for later use, deducts balance in class.
bool Account::debit(double amount){
    if(balance > amount){
        balance -= amount;
        return true;
    } else{
        cout<<"Debit amount exceeded account balance.\n"; //amount asked for too high.
        return false;
    }
}

//credit updates balance with the new amount.
void Account::credit(double amount){
    balance += amount;
}

//returns balance
double Account::getBalance(){
    return balance;
}

//sets balance to the given amount
void Account::setBalance(double amount) {
    balance = amount;
}

//account's to string
string Account::toString() {
    return "";
}