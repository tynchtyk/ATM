#include "card.h"

Card::Card(std::string card_number, std::string curtomerName, int pin, Account *account) {
  card_number_ = card_number;
  customer_name_ = curtomerName;
  pin_ = pin;
  account_ = account;
}

void Card::setAccount(Account *account) {
  account_ = account;
}

bool Card::verifyPIN(int entered_pin) {
  return pin_ == entered_pin;
}

Account* Card::getAccount(){
  return account_;
}