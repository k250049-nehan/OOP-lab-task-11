#include <iostream>
using namespace std;

class InsufficientFundsException {};

class BankAccount {
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void showBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            throw InsufficientFundsException();

        balance -= amount;
        cout << "Withdrawal successful! New Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc(500);
    acc.showBalance();

    try {
        double amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        acc.withdraw(amount);
    }
    catch (InsufficientFundsException) {
        cout << "Error: Insufficient funds to complete withdrawal!" << endl;
    }

    return 0;
}
