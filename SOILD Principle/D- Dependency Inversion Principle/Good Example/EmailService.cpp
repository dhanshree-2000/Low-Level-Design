#include "EmailService.h"
#include <iostream>

void EmailService::send(const std::string& message) {
    std::cout << "Email sent: " << message << "\n";
}