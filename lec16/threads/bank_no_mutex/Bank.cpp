// Bank.cpp

#include "Bank.h"

Bank::Bank() {
	totalBalance = 0;
}

void Bank::deposit(double amount) {
	totalBalance += amount;
}

double Bank::getBalance() {
	return totalBalance;
}
