Problem: ISP Violation in Printer System
Initial Design (Bad Approach)
A single Machine interface forces all printers to implement print(), scan(), and copy().

Issues:

A SimplePrinter (which only prints) must still implement scan() and copy() (either as empty methods or throwing errors).

Clients can accidentally call unsupported methods, leading to runtime failures.

#Diagram: ISP Violation
![ISP Violation](https://github.com/dhanshree-2000/Low-Level-Design/blob/main/SOILD%20Principle/I-%20Interface%20Segregation%20Principle/Without_ISP.png)
❌ Problem:

SimplePrinter is forced to support scan() and copy(), even though it doesn’t need them.

Solution: Applying ISP
Refactored Design (Good Approach)
Split the large Machine interface into smaller, role-specific interfaces:

IPrinter (only print())

IScanner (only scan())

ICopier (only copy())

Benefits:

SimplePrinter only implements IPrinter.

MultiFunctionMachine can implement all three interfaces.

No unnecessary method implementations.

Diagram: ISP Compliance
![ISP Violation](https://github.com/dhanshree-2000/Low-Level-Design/blob/main/SOILD%20Principle/I-%20Interface%20Segregation%20Principle/ISP.png)
✅ Improvements:

No Forced Implementations → SimplePrinter only does printing.

Compile-Time Safety → Calling scan() on SimplePrinter is a compile error (not runtime).

Flexible Extensions → New machines can choose which interfaces to implement.
