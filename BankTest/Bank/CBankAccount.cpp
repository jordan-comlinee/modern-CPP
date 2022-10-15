#include "CBankAccount.h"
#include <iostream>
#include <string>
using namespace std;

void CBankAccount::setBalance(int b) {
	this->m_nBalance = b;

}

void CBankAccount::setAccount(string a) {
	this->m_strAccountNum = a;
}

int CBankAccount::getBalance() {
	return m_nBalance;
}

string CBankAccount::getAccount() {
	return m_strAccountNum;
}

void CBankAccount::deposit(int money) {
	m_nBalance = money + m_nBalance;
}

bool CBankAccount::withdraw(int money) {
	if (money > m_nBalance) {
		return false;
	}
	else {
		m_nBalance = m_nBalance - money;
		return true;
	}

}

