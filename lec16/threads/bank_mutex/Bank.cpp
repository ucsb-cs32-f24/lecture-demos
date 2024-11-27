// Bank.cpp

#include "Bank.h"

Bank::Bank() {
	totalBalance = 0;
}

void Bank::deposit(double amount) {
// added 2 new lines from the "no mutex" version
// for mutex lock and unlock
//
    mutex.lock();
	totalBalance += amount;
    mutex.unlock();
}

double Bank::getBalance() {
	return totalBalance;
}
