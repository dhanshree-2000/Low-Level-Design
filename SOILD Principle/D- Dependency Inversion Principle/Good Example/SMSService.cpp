#include "SMSService.h"
#include <iostream>

void SMSService::send(const std::string& message) {
    std::cout << "SMS sent: " << message << "\n";
}