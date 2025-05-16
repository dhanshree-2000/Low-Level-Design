#ifndef SEND_EMAIL_H
#define SEND_EMAIL_H  // Header guard to prevent multiple inclusions

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "Invoice.cpp"
// This class is responsible for saving the invoice to the database
class SendEmail {
    public:
        void sendEmail(Invoice invoice) {
            // Code to send invoice via email
            cout << "Invoice sent via email." <<invoice.item<< endl;
            return ;
        }
};
#endif // SEND_EMAIL_H
// This code defines a class SendEmail that is responsible for sending an invoice via email.