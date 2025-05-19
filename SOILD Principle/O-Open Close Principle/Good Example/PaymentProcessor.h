#ifndef PAYMENTPROCESSOR_H
#define PAYMENTPROCESSOR_H

#include "PaymentMethod.h" // Include base class

class PaymentProcessor {
public:
    void processPayment(PaymentMethod* paymentMethod, double amount);
};

#endif
