#include <iostream>
#include "account.h"
#include <cmath>
using std::cout;

Account::Account() {
    accountNumber = 0;
    accountBalance = 0.0;
}

void Account::setaccountNumber(int accountno) {
    this->accountNumber = accountno;
}

void Account::setaccountBalance(float accountbalance) {
    this->accountBalance = accountbalance;
}

int Account::getaccountNumber() {
    return accountNumber;
}

float Account::getaccountBalance() {
    return accountBalance;
}

void Account::printBankAccount() {
    std::cout<<"\nAccount Number: "<<accountNumber<<std::endl;
    std::cout<<"\nAccount Balance:"<<accountBalance<<std::endl;
}

void Account::deposit(float amount) {
    if (amount > 0)
    {
        accountBalance = accountBalance + amount;
    }
    else
    {
        std::cout<<"Invalid Action! Please try again!"<<std::endl;
    }
}

void Account::withdraw(float amount) {
 if( amount > 0 && amount <= accountBalance)
 {
     accountBalance = accountBalance - amount;
 }
 else
 {
     std::cout<<"Invalid Action! Please try again!"<<std::endl;
 }
}

void Account::inputTransaction(char action, float amount) {
  if (action == 'D')
  {
      deposit(amount);
  }
  else if (action == 'W')
  {
      withdraw(amount);
  }
  else
  {
      std::cout<<"Invalid action! Please try again!"<<std::endl;
  }
}

void Account::calculateFutureBalance(float interest, int year) {
    float futurebalance = accountBalance * std::pow(1 + interest, year);
    std::cout << "Your balance will be " << futurebalance << " TL after "
    << year << " years with the interest rate " << interest << std::endl;
}

void Account::mortgageYear(float mortgageAmount, float mortgageInterest, float accountInterest) {
    int years = 0;

    while (mortgageAmount > 0) {
        years++;

        // Increase mortgage due to interest
        mortgageAmount += mortgageAmount * mortgageInterest;

        // Earn interest from account balance
        float interestAmount = accountBalance * accountInterest;

        // Use interest to pay down the mortgage
        mortgageAmount -= interestAmount;

        std::cout << "Year " << years << ": Mortgage = " << mortgageAmount
                  << ", Earned Interest = " << interestAmount << std::endl;

        // Special case: interest not enough to cover mortgage interest
        if (interestAmount <= mortgageAmount * mortgageInterest) {
            std::cout << "Mortgage cannot be paid with just interest earned. Infinite loop.\n";
            return;
        }
    }

    std::cout << "Mortgage paid in " << years << " years using only interest from account.\n";
}

//If inputTransaction was not a member function of the class Account
/*void inputTransaction(Account& acc) {
    float current = acc.getaccountBalance();  // ✅ access via getter
    std::cout << "Current balance is: " << current << " TL\n";

    char type;
    float amount;
    std::cout << "Enter transaction type (D for deposit, W for withdraw): ";
    std::cin >> type;
    std::cout << "Enter amount: ";
    std::cin >> amount;

    if (type == 'D') {
        acc.deposit(amount);
    } else if (type == 'W') {
        acc.withdraw(amount);
    } else {
        std::cout << "Invalid transaction type.\n";
    }

    std::cout << "New balance is: " << acc.getaccountBalance() << " TL\n";
}*/