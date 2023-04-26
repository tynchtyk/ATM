#ifndef ATM_STATE_H_
#define ATM_STATE_H_

#include "forward_declarations.h"

class ATMState {
  public:
    virtual void insertCard(ATM *atm, Card *card) = 0;
    virtual void enterPIN(ATM *atm, int pin) = 0;
    virtual void selectAccount(ATM *atm) = 0;
    virtual void checkBalance(ATM *atm) = 0;
    virtual void withdraw(ATM *atm, int amount) = 0;
    virtual void deposit(ATM *atm, int amount) = 0;
    virtual void removeCard(ATM *atm) = 0;
};

#endif