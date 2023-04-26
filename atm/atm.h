#ifndef ATM_H_
#define ATM_H_
#include "forward_declarations.h"
class ATM {
  private:
    ATMState *current_state_;
    Card *card_;

    ATMState *no_card_state;
    ATMState *card_inserted_state;
    ATMState *pin_entered_state;
    ATMState *account_selected_state;
  public:
    ATM() ;

    // Setters & Getters
    void setCard(Card *card) ;

    Card* getCard();

    void setState(ATMState *state);

    ATMState* getNoCardState();

    ATMState* getCardInsertedState();

    ATMState* getPinEnteredState();

    ATMState* getAccountSelectedState();

    // Actions
    void insertCard(Card *card) ;

    void enterPin(int pin) ;
    
    void selectAccount() ;

    void checkBalance();

    void withdraw(int amount);

    void deposit(int amount) ;

    void removeCard() ;
};
#endif //