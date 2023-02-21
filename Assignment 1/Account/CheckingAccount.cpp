#include "CheckingAccount.h"
#include "iostream"
using namespace std;

//CheckingAccount's constructor sets up transFee
CheckingAccount::CheckingAccount(double balance, double fee)
    : Account (balance) {
    transFee = fee;
}

//overrides account debit to include a transaction fee if it goes through. Calls account's debit to do the check and update.
bool CheckingAccount::debit(double amount) {
    if(Account::debit(amount)){
        setBalance(getBalance() - transFee);
        cout << "$" << transFee << " transaction free charged.\n";
        return true;
    } else {
        return false;
    }
}

//overrides account credit to charge a transaction fee.
void CheckingAccount::credit(double amount){
    setBalance(getBalance() + amount - transFee);
    cout << "$" << transFee << " transaction free charged.\n";
}