#pragma once
#include <string>
using namespace std;


class CBankAccount
{
public:
	//�����
	string m_strBankName;
	//�ܾ� �ʱⰪ ����
	void setBalance(int b);
	//���¹�ȣ �ʱⰪ ����
	void setAccount(string a);
	//
	int getBalance();
	string getAccount();
	//�Ա�
	void deposit(int money);
	//���
	bool withdraw(int money);
private:
	//�ܾ�
	int m_nBalance;
	//���¹�ȣ
	string m_strAccountNum;
};

