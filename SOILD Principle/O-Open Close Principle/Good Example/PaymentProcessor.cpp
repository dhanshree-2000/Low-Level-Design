#include "PaymentProcessor.h"
#include <iostream>

void PaymentProcessor::processPayment(PaymentMethod* paymentMethod, double amount) {
    paymentMethod->pay(amount);
    std::cout << "Payment processed successfully." << std::endl;
    // Additional processing logic can be added here
}
