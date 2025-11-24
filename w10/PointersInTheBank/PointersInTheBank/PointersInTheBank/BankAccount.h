#pragma once
#include <iostream>

class BankAccount
{
private:
	std::string owner = "Unnamed";
	double amount = 0.00;

public:

	void SetOwnerName(std::string newName);
	std::string GetOwnerName();

	void SetAccountAmount(double newammount);
	double GetAccountAmount();

	void SetAddFunds(double amount);
	void SetWithdranwFunds(double amount);
};


