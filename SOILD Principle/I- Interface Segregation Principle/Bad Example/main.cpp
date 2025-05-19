#include <iostream>
using namespace std;

// Bad: Large interface forcing all machines to implement unnecessary methods
class Machine {
public:
    virtual void print() = 0;
    virtual void scan() = 0;
    virtual void copy() = 0;
    virtual ~Machine() {}
};

// Simple Printer (Forced to implement scan() and copy() even though it doesn't need them)
class SimplePrinter : public Machine {
public:
    void print() override {
        cout << "Printing document..." << endl;
    }
    void scan() override {
        throw runtime_error("Scan not supported!");
    }
    void copy() override {
        throw runtime_error("Copy not supported!");
    }
};

// Multipurpose Machine (Supports all functions)
class MultiFunctionMachine : public Machine {
public:
    void print() override {
        cout << "Printing document..." << endl;
    }
    void scan() override {
        cout << "Scanning document..." << endl;
    }
    void copy() override {
        cout << "Copying document..." << endl;
    }
};

int main() {
    Machine* printer = new SimplePrinter();
    printer->print(); // Works
    // printer->scan(); // Throws error (but should not even be callable)
    
    Machine* mfm = new MultiFunctionMachine();
    mfm->print();
    mfm->scan();
    mfm->copy();
    
    delete printer;
    delete mfm;
    return 0;
}