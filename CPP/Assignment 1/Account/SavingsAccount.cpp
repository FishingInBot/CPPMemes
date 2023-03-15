#include "SavingsAccount.h"

//SavingsAccount constructor that takes interest and balance, uses account's constructor for balance.
SavingsAccount::SavingsAccount(double balance, double interest)
        : Account (balance) {
    this->interest = interest;
}

//calculates interest from current balance and interest amount.
double SavingsAccount::calculateInterest() {
    return (getBalance() * interest);
}

