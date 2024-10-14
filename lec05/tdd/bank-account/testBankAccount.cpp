#include "bankAccount.h"
#include "tddFuncs.h"
#include<iostream>
int main() {
    std::cout << "Testing class BankAccount..." << std::endl;

    // 1. check 0 balance upon creation
    BankAccount b1;
    assertEquals("check 0 balance upon creation", 0, b1.getBalance());

    // 2. deposit money correctly
    BankAccount b2;
    b2.deposit(500.0);
    assertEquals("deposit money correctly", 500.0, b2.getBalance());

    // 3. withdraw all balance
    BankAccount b3;
    b3.deposit(500.0);
    b3.withdraw(500.0);
    assertEquals("Withdraw all balance", 0.0, b3.getBalance());

    // 4. deposit a negative amount
    BankAccount b4;
    b4.deposit(-500.0);
    assertEquals("Deposit a negative amount", 0.0, b4.getBalance());

    // 5. withdraw more than balance
    BankAccount b5;
    b5.deposit(500.0);
    b5.withdraw(1000.0);
    // if the reqiurement is that we don't allow a transaction that exceeds the balance,
    // then we expect the balance to be 500 before and after
    assertEquals("withdraw more than balance", 500.0, b5.getBalance()); 

    // 6. multiple withdrawals and deposits totalling to a +ve balance
    BankAccount b6;
    b6.deposit(1000.0);
    b6.withdraw(500.0);
    b6.deposit(200.0);
    b6.withdraw(100.0);
    b6.deposit(200.0);
    b6.withdraw(100.0);
    
    assertTrue("mutliple withdrawals and deposits", b6.getBalance() > 0);

    return 0;
}