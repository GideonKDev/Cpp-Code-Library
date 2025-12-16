

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string name;
    int accNo;
    double balance;

public:
    // Default constructor
    BankAccount() {
        this->name = "";
        this->accNo = 0;
        this->balance = 0.0;
    }

    // Parameterized constructor
    BankAccount(string name, int accNo, double balance) {
        this->name = name;
        this->accNo = accNo;
        this->balance = balance;
    }

    // Set all details
    void setDetails(string name, int accNo, double balance) {
        this->name = name;
        this->accNo = accNo;
        this->balance = balance;
    }

    // Display account information
    void display() {
        cout << "\n=== Account Details ===" << endl;
        cout << left << setw(20) << "Name:" << this->name << endl;
        cout << setw(20) << "Account Number:" << this->accNo << endl;
        cout << fixed << setprecision(2);
        cout << setw(20) << "Balance:" << "$" << this->balance << endl;
        cout << "=====================" << endl;
    }

    // Deposit money with validation
    void deposit(double amt) {
        if (amt > 0) {
            this->balance += amt;
            cout << "\n✓ Successfully deposited $" << fixed << setprecision(2) << amt << endl;
            cout << "  New balance: $" << this->balance << endl;
        } else {
            cout << "\n✗ Invalid deposit amount! Amount must be positive." << endl;
        }
    }

    // Withdraw money with validation
    void withdraw(double amt) {
        if (amt > 0) {
            if (amt <= this->balance) {
                this->balance -= amt;
                cout << "\n✓ Successfully withdrawn $" << fixed << setprecision(2) << amt << endl;
                cout << "  New balance: $" << this->balance << endl;
            } else {
                cout << "\n✗ Insufficient balance!" << endl;
                cout << "  Current balance: $" << fixed << setprecision(2) << this->balance << endl;
                cout << "  Attempted withdrawal: $" << amt << endl;
            }
        } else {
            cout << "\n✗ Invalid withdrawal amount! Amount must be positive." << endl;
        }
    }

    // Get current balance
    double getBalance() {
        return this->balance;
    }
    
    // Get account number for searching
    int getAccountNumber() {
        return this->accNo;
    }
    
    // Get name for display
    string getName() {
        return this->name;
    }
};

// Function prototypes
void createNewAccount(BankAccount accounts[], int &accountCount);
void performTransactions(BankAccount accounts[], int accountCount);
void displayAllAccounts(BankAccount accounts[], int accountCount);
void searchAccount(BankAccount accounts[], int accountCount);

int main() {
    const int MAX_ACCOUNTS = 100;
    BankAccount accounts[MAX_ACCOUNTS];
    int accountCount = 0;
    int choice;
    
    cout << fixed << setprecision(2);
    
    cout << " ==============================================" << endl;
    cout << "||     BANK ACCOUNT MANAGEMENT SYSTEM         ||" << endl;
    cout << " ==============================================" << endl;
    
    do {
        cout << "\n========== MAIN MENU ==========" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Perform Transactions" << endl;
        cout << "3. Display All Accounts" << endl;
        cout << "4. Search Account" << endl;
        cout << "5. Exit" << endl;
        cout << "===============================" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                createNewAccount(accounts, accountCount);
                break;
            case 2:
                performTransactions(accounts, accountCount);
                break;
            case 3:
                displayAllAccounts(accounts, accountCount);
                break;
            case 4:
                searchAccount(accounts, accountCount);
                break;
            case 5:
                cout << "\nThank you for using the Bank Management System!" << endl;
                break;
            default:
                cout << "\n✗ Invalid choice! Please try again." << endl;
        }
        
    } while(choice != 5);
    
    return 0;
}

void createNewAccount(BankAccount accounts[], int &accountCount) {
    string name;
    int accNo;
    double balance;
    
    cout << "\n--- CREATE NEW ACCOUNT ---" << endl;
    
    cin.ignore(); // Clear input buffer
    cout << "Enter Customer Name: ";
    getline(cin, name);
    
    cout << "Enter Account Number: ";
    cin >> accNo;
    
    // Check if account number already exists
    for(int i = 0; i < accountCount; i++) {
        if(accounts[i].getAccountNumber() == accNo) {
            cout << "\n✗ Account number already exists!" << endl;
            return;
        }
    }
    
    cout << "Enter Initial Balance: $";
    cin >> balance;
    
    if(balance < 0) {
        cout << "\n✗ Initial balance cannot be negative!" << endl;
        return;
    }
    
    // Ask which constructor to use
    int constructorChoice;
    cout << "\nChoose constructor type:" << endl;
    cout << "1. Use Default Constructor then setDetails()" << endl;
    cout << "2. Use Parameterized Constructor" << endl;
    cout << "Enter choice (1 or 2): ";
    cin >> constructorChoice;
    
    if(constructorChoice == 1) {
        // Using default constructor then setDetails()
        accounts[accountCount] = BankAccount();  // Default constructor
        accounts[accountCount].setDetails(name, accNo, balance);
        cout << "\n✓ Account created using Default Constructor!" << endl;
    } else if(constructorChoice == 2) {
        // Using parameterized constructor
        accounts[accountCount] = BankAccount(name, accNo, balance);
        cout << "\n✓ Account created using Parameterized Constructor!" << endl;
    } else {
        cout << "\n✗ Invalid choice! Account not created." << endl;
        return;
    }
    
    cout << "\n✓ Account created successfully!" << endl;
    accounts[accountCount].display();
    accountCount++;
}

void performTransactions(BankAccount accounts[], int accountCount) {
    if(accountCount == 0) {
        cout << "\n✗ No accounts found! Please create an account first." << endl;
        return;
    }
    
    int accNo, transChoice;
    double amount;
    bool found = false;
    
    cout << "\n--- PERFORM TRANSACTIONS ---" << endl;
    cout << "Enter Account Number: ";
    cin >> accNo;
    
    for(int i = 0; i < accountCount; i++) {
        if(accounts[i].getAccountNumber() == accNo) {
            found = true;
            cout << "\nAccount found: " << accounts[i].getName() << endl;
            cout << "Current Balance: $" << accounts[i].getBalance() << endl;
            
            cout << "\nSelect Transaction:" << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. View Balance" << endl;
            cout << "Enter choice (1-3): ";
            cin >> transChoice;
            
            switch(transChoice) {
                case 1:
                    cout << "Enter deposit amount: $";
                    cin >> amount;
                    accounts[i].deposit(amount);
                    break;
                case 2:
                    cout << "Enter withdrawal amount: $";
                    cin >> amount;
                    accounts[i].withdraw(amount);
                    break;
                case 3:
                    cout << "\nCurrent Balance: $" << accounts[i].getBalance() << endl;
                    break;
                default:
                    cout << "\n✗ Invalid choice!" << endl;
            }
            break;
        }
    }
    
    if(!found) {
        cout << "\n✗ Account not found!" << endl;
    }
}

void displayAllAccounts(BankAccount accounts[], int accountCount) {
    if(accountCount == 0) {
        cout << "\n✗ No accounts to display!" << endl;
        return;
    }
    
    cout << "\n=== ALL ACCOUNTS ===" << endl;
    cout << "Total Accounts: " << accountCount << endl;
    cout << "=====================" << endl;
    
    for(int i = 0; i < accountCount; i++) {
        cout << "\nAccount #" << (i + 1) << ":" << endl;
        accounts[i].display();
    }
}

void searchAccount(BankAccount accounts[], int accountCount) {
    if(accountCount == 0) {
        cout << "\n✗ No accounts to search!" << endl;
        return;
    }
    
    int accNo;
    bool found = false;
    
    cout << "\n--- SEARCH ACCOUNT ---" << endl;
    cout << "Enter Account Number to search: ";
    cin >> accNo;
    
    for(int i = 0; i < accountCount; i++) {
        if(accounts[i].getAccountNumber() == accNo) {
            cout << "\n✓ Account found!" << endl;
            accounts[i].display();
            found = true;
            break;
        }
    }
    
    if(!found) {
        cout << "\n✗ Account not found!" << endl;
    }
}