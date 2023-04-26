#include "forward_declarations/forward_declarations.h"
#include "atm/atm.h"
#include "accounts/account.h"
#include "cards/card.h"
int main() {
    ATM atm;

    atm.insertCard(new Card("1234 5678 9012 3456", "John Doe", 1234, new Account(1000)));

    atm.enterPin(1234);
    atm.selectAccount();
    atm.checkBalance();

    atm.withdraw(500);
    atm.checkBalance();

    atm.deposit(1000);
    atm.checkBalance();

    atm.removeCard();

    return 0;
}