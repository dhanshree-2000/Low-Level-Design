#include <iostream>
using namespace std;

// Split into smaller, focused interfaces
class IPrinter {
public:
    virtual void print() = 0;
    virtual ~IPrinter() {}
};

class IScanner {
public:
    virtual void scan() = 0;
    virtual ~IScanner() {}
};

class ICopier {
public:
    virtual void copy() = 0;
    virtual ~ICopier() {}
};

// Simple Printer (only implements IPrinter)
class SimplePrinter : public IPrinter {
public:
    void print() override {
        cout << "Printing document..." << endl;
    }
};

// Multipurpose Machine (implements all interfaces)
class MultiFunctionMachine : public IPrinter, public IScanner, public ICopier {
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
    IPrinter* printer = new SimplePrinter();
    printer->print(); // Works
    // printer->scan(); // Compile-time error (Good! Not allowed)

    MultiFunctionMachine* mfm = new MultiFunctionMachine();
    mfm->print();
    mfm->scan();
    mfm->copy();

    delete printer;
    delete mfm;
    return 0;
}