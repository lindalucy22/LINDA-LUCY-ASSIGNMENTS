#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

// Abstract base class
class Payment {
public:
    virtual void pay(int amount) const = 0;

    virtual ~Payment() = default;
};

// Derived class 1: Mobile Money
class MobileMoney : public Payment {
public:
    void pay(int amount) const override {
        cout << "Payment Method: Mobile Money\n";
        cout << "Amount: UGX " << amount << endl;
        cout << "Enter Mobile Money PIN to "
             << "confirm payment.\n";
    }
};

// Derived class 2: Bank Transfer
class BankTransfer : public Payment {
public:
    void pay(int amount) const override {
        cout << "Payment Method: Bank Transfer\n";
        cout << "Amount: UGX " << amount << endl;
        cout << "Use your bank account to "
             << "transfer university fees.\n";
    }
};

// Derived class 3: Cash Payment
class CashPayment : public Payment {
public:
    void pay(int amount) const override {
        cout << "Payment Method: Cash\n";
        cout << "Amount: UGX " << amount << endl;
        cout << "Present cash at the "
             << "university cashier.\n";
    }
};

int main() {
    cout << "=== UNIVERSITY FEE PAYMENT SYSTEM ===\n\n";

    vector<unique_ptr<Payment>> payments;

    payments.push_back(make_unique<MobileMoney>());
    payments.push_back(make_unique<BankTransfer>());
    payments.push_back(make_unique<CashPayment>());

    int amount = 500000;

    // Runtime polymorphism
    for (const auto& payment : payments) {
        payment->pay(amount);
        cout << "-------------------------\n";
    }

    return 0;
}
