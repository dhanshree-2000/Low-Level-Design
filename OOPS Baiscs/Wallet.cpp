#include<iostream>
#include "paymentmethod.cpp"

class Wallet : public PaymentMethod {
    private:
        string walletId;
        double balance;

    public:
        Wallet(string walletId, double balance) {
            this->walletId = walletId;
            this->balance = balance;
        }

        void pay() override {
            cout << "Payment made using Wallet : " <<walletId<< endl;
        }
};