#ifndef C__ASSIGN1_ACCOUNT_H
#define C__ASSIGN1_ACCOUNT_H
#include <string>

class Account {
private:
    double balance;

public:
    explicit Account(double balance);
    virtual ~Account() = default;

    virtual bool debit(double amount);

    virtual void credit(double amount);

    virtual double getBalance();
    virtual void setBalance(double amount);

    static std::string toString();
};

#endif //C__ASSIGN1_ACCOUNT_H
