#include "card_inserted_state.h"
#include "atm.h"
#include "card.h"
void CardInsertedState::insertCard(ATM *atm, Card *card) {
  std::cout << "Card already inserted\n";
}

void CardInsertedState::enterPIN(ATM *atm, int pin) {
  if(atm->getCard()->verifyPIN(pin)) {
    std::cout << "PIN VERIFIED\n";    
    atm->setState(atm->getPinEnteredState());
  }
  else {
    std::cout << "Invalid PIN\n";
  }
}

void CardInsertedState::selectAccount(ATM *atm) {
  std::cout << "Enter PIN FIRST \n";
}

void CardInsertedState::checkBalance(ATM *atm) {
  std::cout << "Enter PIN FIRST \n";
}

void CardInsertedState::withdraw(ATM *atm, int amount) {
  std::cout << "Enter PIN FIRST \n";
}

void CardInsertedState::deposit(ATM *atm, int amount) {
  std::cout << "Enter PIN FIRST \n";
}

void CardInsertedState::removeCard(ATM *atm)  {
  atm->setState(atm->getNoCardState());
}