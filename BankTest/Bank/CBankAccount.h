#pragma once
#include <string>
using namespace std;


class CBankAccount
{
public:
	//은행명
	string m_strBankName;
	//잔액 초기값 설정
	void setBalance(int b);
	//계좌번호 초기값 설정
	void setAccount(string a);
	//
	int getBalance();
	string getAccount();
	//입금
	void deposit(int money);
	//출금
	bool withdraw(int money);
private:
	//잔액
	int m_nBalance;
	//계좌번호
	string m_strAccountNum;
};

