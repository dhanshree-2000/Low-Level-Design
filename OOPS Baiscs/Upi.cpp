#include<iostream>
using namespace std;
#include "paymentmethod.cpp"

class UPI : public PaymentMethod {
    private:
        string upiId;
        string phoneNumber;

    public:
        UPI(const string &upiId,const string &phoneNumber) {
            this->upiId = upiId;
            this->phoneNumber = phoneNumber;
        }

        void pay() override {
            cout << "Payment made using UPI : "<<upiId<< endl;
        }
};