#include "pch.h"
#include "LoyaltyScheme.h"

using namespace std;
using namespace System;

ref class CreditCardAccount
{
public:
	void RedeemLoyaltyPoints();
	literal String ^name = "Super Platinum Card";
	static CreditCardAccount();
	CreditCardAccount(long number, double limit);
	static int GetNumberOfAccounts();
	static int numberOfAccounts = 0;
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
private:
	LoyaltyScheme ^scheme;
	static double interestRate;
	long accountNumber;
	double currentBalance;
	double creditLimit;
};
