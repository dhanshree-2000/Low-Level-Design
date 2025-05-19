#include <memory>
#include "EmailService.h"
#include "SMSService.h"
#include "NotificationService.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create notification services
    auto emailService = std::make_unique<EmailService>();
    auto smsService = std::make_unique<SMSService>();
    
    // Create notifiers with different services
    NotificationService emailNotifier(std::move(emailService));
    NotificationService smsNotifier(std::move(smsService));
    
    // Send notifications
    emailNotifier.sendNotification("Hello via Email!");
    smsNotifier.sendNotification("Hello via SMS!");
    
    return 0;
}