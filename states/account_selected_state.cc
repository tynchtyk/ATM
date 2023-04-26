#include "account_selected_state.h"
#include "atm.h"
#include "card.h"
#include "account.h"
void AccountSelectedState::insertCard(ATM *atm, Card *card) {
  std::cout << "Card already inserted\n";
}

void AccountSelectedState::enterPIN(ATM *atm, int pin) {
  std::cout << "PIN already Entered\n";
}

void AccountSelectedState::selectAccount(ATM *atm) {
  std::cout << "Account Already Selected\n";
}

void AccountSelectedState::checkBalance(ATM *atm) {
  std::cout << "Your Balance is :" << atm->getCard()->getAccount()->getBalance() << "\n";
}

void AccountSelectedState::withdraw(ATM *atm, int amount) {
  if(atm->getCard()->getAccount()->withdraw(amount)) {
    std::cout << "Withdraw is done, Now your balance is : ";
    checkBalance(atm);
  }
  else {
    std::cout << "You dont have enough amount\n";
  }
}

void AccountSelectedState::deposit(ATM *atm, int amount) {
  atm->getCard()->getAccount()->withdraw(amount);
  std::cout << "Deposit is done, Now your balance is : ";
  checkBalance(atm);
}

void AccountSelectedState::removeCard(ATM *atm)  {
  atm->setState(atm->getNoCardState());
}