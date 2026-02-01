#include <iostream>
#include <string>

using namespace std;

/* ================= BASE CLASS ================= */

class Account {
protected:
    int id;
    string name;
    int accountNo;
    double balance;

public:
    Account(int id, string name, int accNo, double openingDeposit) {
        this->id = id;
        this->name = name;
        this->accountNo = accNo;
        this->balance = openingDeposit;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    double getBalance() const {
        return balance;
    }

    virtual bool withdraw(double amount) = 0; // pure virtual
};

/* ================= SAVINGS ACCOUNT ================= */

class SavingsAccount : public Account {
public:
    SavingsAccount(int id, string name, int accNo, double openingDeposit)
        : Account(id, name, accNo, openingDeposit) {}

    bool withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
            return true;
        } else {
            cout << "Insufficient funds.\n";
            return false;
        }
    }
};

/* ================= CURRENT ACCOUNT ================= */

class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int id, string name, int accNo,
                   double openingDeposit, double overdraft)
        : Account(id, name, accNo, openingDeposit) {
        overdraftLimit = overdraft;
    }

    bool withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
            return true;
        } else {
            cout << "Overdraft limit exceeded.\n";
            return false;
        }
    }
};

/* ================= MAIN FUNCTION ================= */

int main() {
    int id, accNo;
    string name;
    double deposit, overdraft;

    cout << "----- OPEN SAVINGS ACCOUNT -----\n";
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Opening Deposit: ";
    cin >> deposit;

    Account* savings = new SavingsAccount(id, name, accNo, deposit);

    savings->deposit(500);
    savings->withdraw(300);
    cout << "Savings Balance: " << savings->getBalance() << endl;

    cout << "\n----- OPEN CURRENT ACCOUNT -----\n";
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Opening Deposit: ";
    cin >> deposit;
    cout << "Enter Overdraft Limit: ";
    cin >> overdraft;

    Account* current = new CurrentAccount(id, name, accNo, deposit, overdraft);

    current->withdraw(2000);
    cout << "Current Balance: " << current->getBalance() << endl;

    delete savings;
    delete current;

    return 0;
}

