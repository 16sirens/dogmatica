#include "BankAccount.h"

void BankAccount::SetOwnerName(std::string newName)
{
	owner = newName;
}

std::string BankAccount::GetOwnerName()
{
	return owner;
}

void BankAccount::SetAccountAmount(double newammount)
{
	amount = newammount;
}

double BankAccount::GetAccountAmount()
{
	return amount;
}

void BankAccount::SetAddFunds(double addedFunds)
{
	if (addedFunds > 0) {
		amount += addedFunds;
	}
}

void BankAccount::SetWithdranwFunds(double withdrawnAmount)
{
	if (withdrawnAmount < 0) {
		amount -= withdrawnAmount;
	}
}
