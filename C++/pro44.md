### What is encapsulation in C++? How is it achieved in classes?
<b>Encapsulation :</b>
- Encapsulation is one of the fundamental principles of Object-Oriented Programming (OOP). It refers to the bundling of data (variables) and methods (functions) that operate on the data into a single unit, called a class.

### Achieving Encapsulation in C++ Classes

<b>1. Access Modifiers :</b>
- C++ provides three primary access modifiers that control the visibility of class members (variables and functions):

- public: Members declared as public are accessible from outside the class.
- private: Members declared as private are not accessible from outside the class. These are typically used to store internal data that shouldn't be directly accessed or modified by external code.
- protected: Members declared as protected are accessible only within the class and by derived classes (if inheritance is used). This is less common but useful in certain inheritance scenarios.
2. Private Data Members and Public Methods
A typical approach to encapsulation in C++ is to make the data members private and provide public getter and setter methods to access and modify those members. 
Example :

```c
#include <iostream>
using namespace std;

class BankAccount {
private:
    // Private data members
    string accountHolder;
    double balance;

public:
    // Constructor to initialize data
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    // Getter for accountHolder (public access)
    string getAccountHolder() {
        return accountHolder;
    }

    // Getter for balance (public access)
    double getBalance() {
        return balance;
    }

    // Setter for balance (public access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
};

int main() {
    // Creating an object of the BankAccount class
    BankAccount account("John Doe", 1000.0);

    // Accessing public methods
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Initial Balance: $" << account.getBalance() << endl;

    // Performing operations using public methods
    account.deposit(500);
    cout << "Balance after deposit: $" << account.getBalance() << endl;

    account.withdraw(200);
    cout << "Balance after withdrawal: $" << account.getBalance() << endl;

    return 0;
}
```
