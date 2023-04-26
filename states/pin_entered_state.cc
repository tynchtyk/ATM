#include "pin_entered_state.h"
#include "atm.h"
void PinEnteredState::insertCard(ATM *atm, Card *card) {
  std::cout << "Card already inserted\n";
}
void PinEnteredState::enterPIN(ATM *atm, int pin) {
  std::cout << "PIN already Entered\n";
}

void PinEnteredState::selectAccount(ATM *atm) {
  atm->setState(atm->getAccountSelectedState());
}

void PinEnteredState::checkBalance(ATM *atm) {
  std::cout << "Select Account First\n";
}

void PinEnteredState::withdraw(ATM *atm, int amount) {
  std::cout << "Select Account First\n";
}

void PinEnteredState::deposit(ATM *atm, int amount) {
  std::cout << "Select Account First\n";
}

void PinEnteredState::removeCard(ATM *atm)  {
  atm->setState(atm->getNoCardState());
}