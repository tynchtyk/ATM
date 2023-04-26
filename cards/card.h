#ifndef CARD_H_
#define CARD_H_

#include <string>
#include "account.h"

class Card {
  private:
    std::string card_number_;
    std::string customer_name_;
    int pin_;

    Account *account_;
  public:
    Card(std::string card_number, std::string curtomerName, int pin, Account *account);

    void setAccount(Account *account) ;
    
    bool verifyPIN(int entered_pin) ;

    Account *getAccount();
};

#endif //CARD_H_