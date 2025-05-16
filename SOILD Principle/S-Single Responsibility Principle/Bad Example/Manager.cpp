#include<iostream>
#include<string>
using namespace std;

#include "Invoice.cpp"

int main(){
    Invoice invoice("Laptop", 2, 1500.00);
    invoice.printInvoice();
    invoice.saveToDatabase();
    invoice.sendEmail();
    return 0;
}