#ifndef INVOICE_H  // Header guard to prevent multiple inclusions
#define INVOICE_H
#include<iostream>
#include<string>
using namespace std;
class Invoice {
    public:
        string item;
        int quantity;
        double price;

        Invoice(string item, int quantity, double price) {
            this->item = item;
            this->quantity = quantity;
            this->price = price;
        }

        double getInvoiceAmount() {
            return quantity * price;
        }

        void printInvoice() {
            cout << "Item: " << item << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Price: " << price << endl;
            cout << "Total Amount: " << getInvoiceAmount() << endl;
        }
};
#endif // INVOICE_H