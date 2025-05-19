Problem: ISP Violation in Printer System
Initial Design (Bad Approach)
A single Machine interface forces all printers to implement print(), scan(), and copy().

Issues:

A SimplePrinter (which only prints) must still implement scan() and copy() (either as empty methods or throwing errors).

Clients can accidentally call unsupported methods, leading to runtime failures.

Diagram: ISP Violation
┌───────────────────┐
│     Machine       │ (Interface)
├───────────────────┤
│ + print()         │
│ + scan()          │  ← Forces all printers to implement  
│ + copy()          │    unnecessary methods.
└─────────┬─────────┘
          │
          ▼
┌───────────────────┐       ┌───────────────────────┐
│  SimplePrinter    │       │ MultiFunctionMachine  │
├───────────────────┤       ├───────────────────────┤
│ + print()         │       │ + print()             │
│ + scan() → Error! │       │ + scan()              │
│ + copy() → Error! │       │ + copy()              │
└───────────────────┘       └───────────────────────┘
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
┌───────────────┐       ┌───────────────┐       ┌───────────────┐
│   IPrinter    │       │   IScanner    │       │   ICopier     │
├───────────────┤       ├───────────────┤       ├───────────────┤
│ + print()     │       │ + scan()      │       │ + copy()      │
└───────┬───────┘       └───────┬───────┘       └───────┬───────┘
        │                       │                       │
        ▼                       ▼                       ▼
┌───────────────┐       ┌───────────────────────┐
│ SimplePrinter │       │ MultiFunctionMachine  │
├───────────────┤       ├───────────────────────┤
│ + print()     │       │ + print()             │
└───────────────┘       │ + scan()              │
                        │ + copy()              │
                        └───────────────────────┘
✅ Improvements:

No Forced Implementations → SimplePrinter only does printing.

Compile-Time Safety → Calling scan() on SimplePrinter is a compile error (not runtime).

Flexible Extensions → New machines can choose which interfaces to implement.