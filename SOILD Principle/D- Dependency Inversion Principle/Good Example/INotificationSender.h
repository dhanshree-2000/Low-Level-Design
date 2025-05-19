#ifndef INOTIFICATIONSENDER_H
#define INOTIFICATIONSENDER_H

#include <string>

class INotificationSender {
public:
    virtual ~INotificationSender() = default;
    virtual void send(const std::string& message) = 0;
};

#endif // INOTIFICATIONSENDER_H