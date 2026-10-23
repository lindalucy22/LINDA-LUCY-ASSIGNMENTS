## Overview
Inheritance allows one class to reuse the properties and functions of another class. This program demonstrates **hierarchical inheritance** using university students.

## Classes

### Student (Base Class)
The `Student` class stores information shared by students:
- Name
- Registration number
- University

The `displayStudent()` function displays these details.

### UndergraduateStudent (Derived Class)
The `UndergraduateStudent` class inherits from `Student` and adds the student's **year of study**. Its display function shows the shared details and the year of study.

### PostgraduateStudent (Derived Class)
The `PostgraduateStudent` class also inherits from `Student` and adds the student's **research topic**. Its display function shows the shared details and the research topic.

## Type of Inheritance
The program uses **hierarchical inheritance** because two derived classes inherit from the same base class.

## Important Concepts
- **Base class:** A class that provides shared information and functions.
- **Derived class:** A class that inherits from another class.
- **Public inheritance:** Allows the derived classes to inherit the public and protected members of `Student` with their access levels preserved.
- **Protected members:** Can be accessed by the base class and its derived classes.
- **Private members:** Keep class-specific information restricted to its class.
- **Constructors:** Initialize student information when objects are created.
- **Code reuse:** Both derived classes use `displayStudent()` to avoid repeating instructions.
- **Const functions:** Display information without changing the object's data.

## How the Program Works
1. An undergraduate student and a postgraduate student are created.
2. The `Student` constructor initializes their common details.
3. Each derived class initializes its additional detail.
4. The display functions show the relevant student information.

## Conclusion
This C++23 program demonstrates how hierarchical inheritance helps related classes share information and functions while keeping their own unique details. It does not demonstrate runtime polymorphism because it does not use virtual functions.
