#include <iostream>

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void setBalance(double newBalance)
    {
        balance = newBalance;
    }

    double getBalance() const
    {
        return balance;
    }
};

void transferMoney(BankAccount& fromAccount, BankAccount& toAccount, double amount)
{
    double fromBalance = fromAccount.getBalance();
    double toBalance = toAccount.getBalance();

    if (fromBalance >= amount)
    {
        fromAccount.setBalance(fromBalance - amount);
        toAccount.setBalance(toBalance + amount);
        std::cout << "Transfer successful!" << std::endl;
    }
    else
    {
        std::cout << "Insufficient balance in the sender's account. Transfer failed." << std::endl;
    }
}

int main()
{
    BankAccount dbblAccount(1000.0);       // Create a DBBL bank account with initial balance of 1000
    BankAccount trustBankAccount(2000.0);  // Create a Trust Bank account with initial balance of 2000

    double transferAmount;
    std::cout << "Enter the amount to transfer: ";
    std::cin >> transferAmount;

    // Transfer money from DBBL to Trust Bank
    transferMoney(dbblAccount, trustBankAccount, transferAmount);

    // Display the current balance of each bank account
    std::cout << "DBBL account balance: " << dbblAccount.getBalance() << std::endl;
    std::cout << "Trust Bank account balance: " << trustBankAccount.getBalance() << std::endl;

    return 0;
}

