#ifndef EMAILSERVICE_H
#define EMAILSERVICE_H

#include "INotificationSender.h"
#include <string>

class EmailService : public INotificationSender {
public:
    void send(const std::string& message) override;
};

#endif // EMAILSERVICE_H