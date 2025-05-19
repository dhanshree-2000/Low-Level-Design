#include "PaymentProcessor.h"
#include "CreditCard.h"
#include "UPI.h"

int main() {
    PaymentProcessor processor;
    PaymentMethod* cc = new CreditCard();
    PaymentMethod* upi = new UPI();

    processor.processPayment(cc, double(100));
    processor.processPayment(upi, double(120));

    delete cc;
    delete upi;
    return 0;
}
// This code demonstrates the Open/Closed Principle in action.