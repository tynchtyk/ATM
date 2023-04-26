#ifndef NO_CARD_STATE_H_
#define NO_CARD_STATE_H_

#include "forward_declarations.h"
#include "atm_state.h"
#include <iostream>

class NoCardState : public ATMState {
public:
    void insertCard(ATM *atm, Card *card) override;

    void enterPIN(ATM *atm, int pin) override;

    void selectAccount(ATM *atm) override;
    void checkBalance(ATM *atm) override;

    void withdraw(ATM *atm, int amount) override;

    void deposit(ATM *atm, int amount) override;

    void removeCard(ATM *atm) override ;
};

#endif  // NO_CARD_STATE_H_
