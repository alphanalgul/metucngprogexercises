
#ifndef ACCOUNT_CONSTRUCTOR_ACCOUNT_H
#define ACCOUNT_CONSTRUCTOR_ACCOUNT_H
class Account
{
private:
    int accountNumber;
    float accountBalance;
public:
    Account();
    void setaccountNumber(int accountNumber);
    void setaccountBalance(float accountBalance);
    int getaccountNumber(void);
    float getaccountBalance(void);
    void  printBankAccount(void);
    void deposit(float amount);
    void withdraw(float amount);
    void inputTransaction(char action,float amount);
    void calculateFutureBalance(float interest,int year);
    void mortgageYear(float mortgageAmount, float mortgageInterest, float accountInterest);


};
#endif //ACCOUNT_CONSTRUCTOR_ACCOUNT_H
