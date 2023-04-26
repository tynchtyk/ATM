#include "no_card_state.h"
#include "atm.h"
void NoCardState::insertCard(ATM *atm, Card *card) {
    atm->setCard(card);
    atm->setState(atm->getCardInsertedState());
}

void NoCardState::enterPIN(ATM *atm, int pin) {
    std::cout << "Insert Card FIRST \n";
}

void NoCardState::selectAccount(ATM *atm) {
    std::cout << "Insert Card FIRST \n";
}

void NoCardState::checkBalance(ATM *atm) {
    std::cout << "Insert Card FIRST \n";
}

void NoCardState::withdraw(ATM *atm, int amount) {
    std::cout << "Insert Card FIRST \n";
}

void NoCardState::deposit(ATM *atm, int amount) {
    std::cout << "Insert Card FIRST \n";
}

void NoCardState::removeCard(ATM *atm)  {
    atm->setState(atm->getNoCardState());
}