#ifndef saveToDB_H  // Header guard to prevent multiple inclusions
#define saveToDB_H
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "Invoice.cpp"
// This class is responsible for saving the invoice to the database

class SaveToDB {
    public:
        void saveToDatabase(Invoice invoice) {
            // Code to save invoice to database
            ofstream dbFile("database.txt", ios::app);
            if (dbFile.is_open()) {
                dbFile << "Item: " << invoice.item << ", Quantity: " << invoice.quantity << ", Price: " << invoice.price << endl;
                dbFile.close();
                cout << "Invoice saved to database." << endl;
            } else {
                cout << "Unable to open database file." << endl;
            }
        }
};  
#endif // saveToDB_H
// This code defines a class SaveToDB that is responsible for saving an invoice to a database.
