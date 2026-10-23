## Overview

This C++23 program demonstrates **runtime polymorphism** using a university fee payment system. Different payment methods use the same `pay()` function but perform different actions.

## Classes

### Payment (Abstract Base Class)

The `Payment` class defines a pure virtual function, `pay(int amount)`. Each derived class must provide its own implementation. The class also has a virtual destructor.

### MobileMoney (Derived Class)

The `MobileMoney` class displays the payment amount and asks the user to enter a Mobile Money PIN to confirm payment.

### BankTransfer (Derived Class)

The `BankTransfer` class displays the payment amount and instructs the user to transfer university fees using a bank account.

### CashPayment (Derived Class)

The `CashPayment` class displays the payment amount and instructs the user to pay at the university cashier.

## Type of Polymorphism

The program uses **runtime polymorphism**. The `pay()` function is declared `virtual` in the base class and overridden in each derived class. The appropriate function is selected at runtime through a base-class pointer.

## Important Concepts

- **Abstract class:** A class that cannot be instantiated directly because it contains a pure virtual function.
- **Pure virtual function:** A function declared with `= 0` that derived classes must implement to become concrete classes.
- **Function overriding:** Each payment class provides its own version of `pay()`.
- **Base-class pointer:** Allows different derived objects to be accessed through the `Payment` type.
- **`unique_ptr`:** Manages dynamically created payment objects automatically.
- **`vector`:** Stores the payment objects together.
- **Virtual destructor:** Ensures safe destruction of derived objects through base-class pointers.

## How the Program Works

1. The program creates Mobile Money, Bank Transfer, and Cash Payment objects.
2. It stores them in a vector of `unique_ptr<Payment>`.
3. It sets the payment amount to UGX 500,000.
4. A loop calls `pay()` for each payment object.
5. Each object displays its own payment instructions.

## Conclusion

This program demonstrates how runtime polymorphism allows different payment methods to share one interface while providing different behavior. It displays payment instructions but does not process real transactions.
