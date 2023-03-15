#include "Account.h"

#ifndef C__ASSIGN1_SAVINGSACCOUNT_H
#define C__ASSIGN1_SAVINGSACCOUNT_H

class SavingsAccount : public Account {
public:
    SavingsAccount(double balance, double interest);
    ~SavingsAccount() override = default;
    double calculateInterest();

private:
    double interest;
};

#endif //C__ASSIGN1_SAVINGSACCOUNT_H
