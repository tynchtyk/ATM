#ifndef ACCOUNT_SELECTED_STATE_H_
#define ACCOUNT_SELECTED_STATE_H_

#include "forward_declarations.h"
#include "atm_state.h"
#include <iostream>

class AccountSelectedState : public ATMState {
public:
  void insertCard(ATM *atm, Card *card) override;

  void enterPIN(ATM *atm, int pin) override;
  
  void selectAccount(ATM *atm) override;
  
  void checkBalance(ATM *atm) override;
  
  void withdraw(ATM *atm, int amount) override;
  
  void deposit(ATM *atm, int amount) override;
  
  void removeCard(ATM *atm) override ;
};

#endif // PIN_ENTERED_STATE_H_