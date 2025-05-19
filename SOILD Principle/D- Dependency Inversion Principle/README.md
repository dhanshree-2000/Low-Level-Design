Dependency Inversion Principle (DIP) in Notification System
Overview
The Dependency Inversion Principle (DIP) states:

"High-level modules should not depend on low-level modules. Both should depend on abstractions."

We'll demonstrate DIP violation and its solution in a Notification System (Email & SMS).

❌ Bad Design: DIP Violation
Problem
High-level NotificationService directly depends on concrete implementations (EmailService, SMSService).

Tight coupling makes the system rigid and hard to extend.

Diagram (DIP Violation)
Diagram
![ISP Violation](https://github.com/dhanshree-2000/Low-Level-Design/blob/main/SOILD%20Principle/D-%20Dependency%20Inversion%20Principle/DIP_bad.png)









Issues
Rigid Coupling: Adding a new notification type (e.g., Push) requires modifying NotificationService.

Hard to Test: Mocking dependencies is difficult.

Violates DIP: High-level module depends on low-level details.

✅ Good Design: DIP Compliance
Solution
Introduce an abstraction (NotificationSender interface).

Make NotificationService depend on the abstraction.

Concrete implementations (EmailService, SMSService) depend on the same abstraction.

Diagram (DIP Compliance)
Diagram
![ISP Violation](https://github.com/dhanshree-2000/Low-Level-Design/blob/main/SOILD%20Principle/D-%20Dependency%20Inversion%20Principle/DIP_good.png)










Benefits
Loose Coupling: NotificationService doesn’t depend on concrete classes.

Extensible: New senders (e.g., PushService) can be added without modifying NotificationService.

Testable: Easy to mock NotificationSender.
