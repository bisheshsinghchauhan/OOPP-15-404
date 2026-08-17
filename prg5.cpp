#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // Data hiding

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance\n";
    }

    void display() {
        cout << "Balance: " << balance;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(5000);
    acc.withdraw(1500);
    acc.display();

    return 0;
}