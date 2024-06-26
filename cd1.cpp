#include <iostream>
#include <string>
class BankAccount {
private:
    std::string accountNumber;
    double balance;
public:
    BankAccount(const std::string& accNumber, double initialBalance) 
        : accountNumber(accNumber), balance(initialBalance) {
        std::cout << "Account created with account number " << accountNumber << std::endl;
    }
    ~BankAccount() {
        std::cout << "Account with account number " << accountNumber << " is being deleted" << std::endl;
    }
    void display() {
        std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
    }
};
int main() {
    BankAccount account("123456789", 1000.0);
    account.display();
    return 0;
}

