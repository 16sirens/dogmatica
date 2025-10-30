#include <iostream>
using namespace std;



int main() {
    double deposit(double, double);
    double withdraw(double, double, int);
    void displayBalance(double, int, string);

    // Separate balances for each account
    double balance1 = 0.0;
    double balance2 = 0.0;
    double balance3 = 0.0;
    double balance4 = 0.0;
    double balance5 = 0.0;

    string user1 = "Adam";
    string user2 = "Bob";
    string user3 = "Charles";
    string user4 = "Daisy";
    string user5 = "Emily";

    balance1 = deposit(balance1, 100.0);
    balance1 = withdraw(balance1, 30.0, 1);
    displayBalance(balance1, 1, user1);

    balance2 = deposit(balance2, 200.0);
    balance2 = withdraw(balance2, 50.0, 2);
    displayBalance(balance2, 2, user2);

    balance3 = deposit(balance3, 150.0);
    balance3 = withdraw(balance3, 20.0, 3);
    displayBalance(balance3, 3, user3);

    balance4 = deposit(balance4, 300.0);
    balance4 = withdraw(balance4, 100.0, 4);
    displayBalance(balance4, 4, user4);

    balance5 = deposit(balance5, 50.0);
    balance5 = withdraw(balance5, 60.0, 5);
    displayBalance(balance5, 5, user5);

    return 0;
}


// Shared functions
double deposit(double balance, double amount) {
    balance += amount;
    return balance;
}

double withdraw(double balance, double amount, int accountNumber) {
    if (amount <= balance) {
        balance -= amount;
    }
    else {
        cout << "Account " << accountNumber << ": Insufficient funds!" << endl;
    }
    return balance;
}

void displayBalance(double balance, int accountNumber, string username) {
    cout << "Account " << accountNumber << " belong to " << username << " " << balance << ": £" << balance << endl;
}