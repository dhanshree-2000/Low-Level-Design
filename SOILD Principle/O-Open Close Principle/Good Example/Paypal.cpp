#ifndef PAYPAL_H
#define PAYPAL_H
#include <iostream>
#include <string>
#include <vector>
#include "PaymentMethod.h"
using namespace std;

class PayPal : public PaymentMethod {
    public:
        void pay(double amount) override {
            cout << "Processing PayPal payment of $" << amount << endl;
        }
};

#endif // PAYPAL_H
// // This code defines a PayPal class that inherits from the PaymentMethod class.
// // It overrides the processPayment method to provide its own implementation for processing PayPal payments.
// // This adheres to the Open/Closed Principle because we can add new payment methods without modifying the existing code.
// // The PaymentProcessor class can now use polymorphism to process payments without needing to know the specific type of payment method being used.
