#pragma once
#include <string>
using namespace std;

class Account
{
	string name;
	int id;
	int balance;
public:
	Account(string name, int id, int balance);
	void deposit(int money);
	int withdraw(int money);
	string getOwner();
	int inquiry();
};

