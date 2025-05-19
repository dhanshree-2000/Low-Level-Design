#ifndef PAYMENTMETHOD_H
#define PAYMENTMETHOD_H

class PaymentMethod {
public:
    virtual ~PaymentMethod() = default;
    virtual void pay(double amount) = 0;
};

#endif
// This code defines an abstract base class PaymentMethod with a pure virtual function pay.
// This allows for different payment methods to be implemented as subclasses, each providing its own implementation of pay.