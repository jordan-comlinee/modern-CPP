#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

Account::Account(string name, int id, int balance) {
	this->name = name;
	this->id = id;
	this->balance = balance;
}

void Account::deposit(int money) {
	balance += money;
}

int Account::withdraw(int money) {
	balance -= money;
	return balance;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return balance;
}



int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}