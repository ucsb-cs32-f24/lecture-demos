#include <iostream>
#include <thread>
#include "Bank.h"

using namespace std;
// This is the same main.cpp as from the "no_mutex" version

void run(Bank* b) {
	for (int i = 0; i < 10000; i++) { b->deposit(10); }
}

int main() {
	Bank* bank = new Bank();
	thread t1(run, bank);
	thread t2(run, bank);
	t1.join();
	t2.join();
	cout << "---" << endl;
	cout << bank->getBalance() << endl;
	return 0;
}
