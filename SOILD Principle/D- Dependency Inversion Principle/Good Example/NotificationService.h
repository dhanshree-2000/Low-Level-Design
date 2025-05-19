#ifndef NOTIFICATIONSERVICE_H
#define NOTIFICATIONSERVICE_H

#include <memory>
#include <string>
#include "INotificationSender.h"

class NotificationService {
    std::unique_ptr<INotificationSender> sender;
    
public:
    explicit NotificationService(std::unique_ptr<INotificationSender> sender);
    void sendNotification(const std::string& message);
};

#endif // NOTIFICATIONSERVICE_H