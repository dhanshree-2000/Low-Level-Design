#ifndef UPI_H
#define UPI_H

#include "PaymentMethod.h"

class UPI : public PaymentMethod {
public:
    void pay(double amount) override;
};

#endif
