#include <iostream>
#include <string>

// Low-level modules
class EmailService {
public:
    void sendEmail(const std::string& message) {
        std::cout << "Email sent: " << message << "\n";
    }
};

class SMSService {
public:
    void sendSMS(const std::string& message) {
        std::cout << "SMS sent: " << message << "\n";
    }
};

// High-level module (depends on low-level modules)
class NotificationService {
    EmailService emailService;
    SMSService smsService;
    
public:
    void sendEmail(const std::string& message) {
        emailService.sendEmail(message);
    }
    
    void sendSMS(const std::string& message) {
        smsService.sendSMS(message);
    }
};

int main() {
    NotificationService notifier;
    notifier.sendEmail("Hello via Email!");
    notifier.sendSMS("Hello via SMS!");
    
    return 0;
}