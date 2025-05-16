#include<iostream>
#include<string>
using namespace std;

#include "Invoice.cpp"
#include "SaveToDB.cpp"
#include "SendEmail.cpp"

int main(){
    Invoice invoice("Laptop", 2, 1500.00);
    invoice.printInvoice();
    SaveToDB db;
    db.saveToDatabase(invoice);
    SendEmail email;
    email.sendEmail(invoice);
    return 0;
}