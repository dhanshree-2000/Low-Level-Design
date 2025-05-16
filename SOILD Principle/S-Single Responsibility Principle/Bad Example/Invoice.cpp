#include<iostream>
#include<string>
using namespace std;
class Invoice {
    private:
        string item;
        int quantity;
        double price;
    public:
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
        // Methods that violate the Single Responsibility Principle
        // These methods should be in separate classes
        // to handle database operations because they are not related to the invoice itself
        // This violates the Single Responsibility Principle
        void saveToDatabase(){
            // Code to save invoice to database
            cout << "Invoice saved to database." << endl;
        }

        // This method should also be in a separate class
        // to handle email operations because it is not related to the invoice itself
        void sendEmail(){
            // Code to send invoice via email
            cout << "Invoice sent via email." << endl;
        }
};