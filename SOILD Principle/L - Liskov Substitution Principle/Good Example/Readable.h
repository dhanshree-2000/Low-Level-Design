#ifndef READABLE_H
#define READABLE_H

class Readable {
public:
    virtual ~Readable() {}
    virtual void read() = 0;
};

#endif
// This code defines an abstract class `Readable` with a pure virtual function `read()`.
// Any class that inherits from `Readable` must implement the `read()` function.