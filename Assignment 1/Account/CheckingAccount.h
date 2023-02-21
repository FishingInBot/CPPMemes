#include "Account.h"

#ifndef C__ASSIGN1_CHECKINGACCOUNT_H
#define C__ASSIGN1_CHECKINGACCOUNT_H

class CheckingAccount : public Account {
public:
    CheckingAccount(double balance, double transFee);
    ~CheckingAccount() override = default;

    bool debit(double amount) override;
    void credit(double amount) override;
private:
    double transFee;
};

#endif //C__ASSIGN1_CHECKINGACCOUNT_H
