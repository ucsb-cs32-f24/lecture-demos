// Bank.h
// Added the following include:
#include <mutex>

class Bank {
public:
	Bank();
	void deposit(double amount);
	double getBalance();
private:
	double totalBalance;
// added mutex here:
    std::mutex mutex;
};
