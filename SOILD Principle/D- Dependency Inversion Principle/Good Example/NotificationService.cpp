#include "NotificationService.h"

NotificationService::NotificationService(std::unique_ptr<INotificationSender> sender) 
    : sender(std::move(sender)) {}

void NotificationService::sendNotification(const std::string& message) {
    sender->send(message);
}