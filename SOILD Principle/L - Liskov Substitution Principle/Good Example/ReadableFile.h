#ifndef READABLE_FILE_H
#define READABLE_FILE_H

#include "Readable.h"

class ReadableFile : public Readable {
public:
    void read() override;
};

#endif
