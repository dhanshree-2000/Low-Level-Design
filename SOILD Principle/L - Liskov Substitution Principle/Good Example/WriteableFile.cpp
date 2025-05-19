#ifndef WRITABLE_FILE_CPP
#define WRITABLE_FILE_CPP

#include <iostream>
#include "ReadableFile.h"
#include "Writeable.h"

class WritableFile : public ReadableFile, public Writable {
public:
    void write() override {
        std::cout << "Writing to file" << std::endl;
    }
};

#endif 