#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "PaymentMethod.h"

class CreditCard : public PaymentMethod {
public:
    void pay(double amount) override;
};

#endif
