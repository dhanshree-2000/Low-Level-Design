#include <iostream>
#include <string>
#include "card.cpp"

class CreditCard : public Card {
protected:
    std::string expDate;
    std::string cvv;
public:
    CreditCard(const std::string& cardNo, const std::string& name,
               const std::string& expDate , const std::string& cvv) 
        : Card(cardNo, name) {
        this->expDate = expDate;
        this->cvv = cvv;
        }

    void pay() {
        std::cout << "Making payment via Credit Card: "<<cardNo << std::endl;
    }
};