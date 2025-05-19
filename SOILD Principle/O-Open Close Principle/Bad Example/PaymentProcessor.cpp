#ifndef PAYMENTPROCESSOR_H
#define PAYMENTPROCESSOR_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class PaymentProcessor {
    public:
        void processPayment(const string& paymentType, double amount) {
            if (paymentType == "credit") {
                cout << "Processing credit card payment of $" << amount << endl;
            } else if (paymentType == "debit") {
                cout << "Processing debit card payment of $" << amount << endl;
            } else if (paymentType == "paypal") {
                cout << "Processing PayPal payment of $" << amount << endl;
            } else {
                cout << "Unknown payment type" << endl;
            }
        }
};


#endif // PAYMENTPROCESSOR_H
// This code violates the Open/Closed Principle because the PaymentProcessor class is not open for extension.
// If we want to add a new payment method, we have to modify the existing code.
// This can lead to bugs and makes the code harder to maintain.
// A better approach would be to use polymorphism and interfaces to allow for easy extension without modifying existing code.
// This code is a simple example of a payment processor that handles different payment types.