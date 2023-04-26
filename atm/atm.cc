#include "atm.h"
#include "card.h"
#include "atm_state.h"
#include "../states/no_card_state.h"
#include "../states/card_inserted_state.h"
#include "../states/pin_entered_state.h"
#include "../states/account_selected_state.h"
ATM::ATM() {
  no_card_state = new NoCardState();
  card_inserted_state = new CardInsertedState();
  pin_entered_state = new PinEnteredState();
  account_selected_state = new AccountSelectedState();
  
  current_state_ = no_card_state;
}

// Setters & Getters
void ATM::setCard(Card *card) {
  card_ = card;
}

Card* ATM::getCard(){
  return card_;
}

void ATM::setState(ATMState *state) {
  current_state_ = state;
}

ATMState* ATM::getNoCardState(){
  return no_card_state;
}

ATMState* ATM::getCardInsertedState(){
  return card_inserted_state;
}

ATMState* ATM::getPinEnteredState(){
  return pin_entered_state;
}

ATMState* ATM::getAccountSelectedState(){
  return account_selected_state;
}

// Actions
void ATM::insertCard(Card *card) {
  current_state_->insertCard(this, card);
}

void ATM::enterPin(int pin) {
  current_state_->enterPIN(this, pin);
}

void ATM::selectAccount() {
  current_state_->selectAccount(this);
}

void ATM::checkBalance(){
  current_state_->checkBalance(this);
}

void ATM::withdraw(int amount){
  current_state_->withdraw(this, amount);
}

void ATM::deposit(int amount) {
  current_state_->deposit(this, amount);
}

void ATM::removeCard() {
  current_state_->removeCard(this);
}