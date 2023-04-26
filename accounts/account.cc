#include "account.h"

Account::Account(int initialBalance) : balance(initialBalance) {}

int Account::getBalance() const {
  return balance;
}

void Account::setBalance(int newBalance) {
    balance = newBalance;
}

void Account::deposit(int amount) {
    balance += amount;
}

bool Account::withdraw(int amount) {
  if (amount > balance) {
      return false;
  }
  balance -= amount;
  return true;
}