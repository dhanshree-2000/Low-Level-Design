#ifndef SMSSERVICE_H
#define SMSSERVICE_H

#include "INotificationSender.h"
#include <string>

class SMSService : public INotificationSender {
public:
    void send(const std::string& message) override;
};

#endif // SMSSERVICE_H