#include <iostream>
#include "paymentservice.cpp"
#include "creditcard.cpp"
#include "debitcard.cpp"
#include "upi.cpp"
#include "wallet.cpp"

int main() {
    PaymentService ps;
    ps.addPaymentMethod("PrateekDebitCard", new DebitCard("1234", "Dhanshree Kadam"));
    ps.addPaymentMethod("PrateekCreditCard", new CreditCard("5678", "Dhanshree Kadam", "12/23", "123"));
    ps.addPaymentMethod("PrateekUPI", new UPI("dhanshree@okaxis","1234567890"));
    ps.addPaymentMethod("PrateekWallet", new Wallet("12345", 1000.0));

    ps.makePayment("PaymentUPI");
    ps.makePayment("PaymentDebitCard");
    ps.makePayment("PaymentWallet");
    ps.makePayment("PaymentCreditCard");

    return 0;
}