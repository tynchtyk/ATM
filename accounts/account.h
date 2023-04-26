#ifndef ACCOUNT_H_
#define ACCOUNT_H_
class Account {
private:
    int balance;
public:
    Account(int initialBalance);

    int getBalance() const;

    void setBalance(int newBalance);

    void deposit(int amount);

    bool withdraw(int amount) ;
};
#endif //ACCOUNT_H_