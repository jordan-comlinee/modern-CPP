#include <iostream>
#include <string>
#include "CBankAccount.h"
using namespace std;

void transferMoney(CBankAccount sender, CBankAccount reciever, int smoney) {
	if (sender.withdraw(smoney) == true) {
		sender.withdraw(smoney);
		reciever.deposit(smoney);
	}
	else {
		cout << "��ü ����!" << endl;
	}
}

int main() {
	CBankAccount pocketMoney;
	CBankAccount savingMoney;

	pocketMoney.setBalance(10000);
	pocketMoney.setAccount("010-1234-5678");
	pocketMoney.m_strBankName = "�ϳ�����";

	savingMoney.setBalance(0);
	savingMoney.setAccount("010-1234-5678+777");
	savingMoney.m_strBankName = "īī����ũ";

	pocketMoney.deposit(50000);

	transferMoney(pocketMoney, savingMoney, 30000);
	pocketMoney.withdraw(15000);
	transferMoney(savingMoney, pocketMoney, 100000);

	cout << pocketMoney.m_strBankName << "  |  " << pocketMoney.getAccount() << "  |  " << pocketMoney.getBalance() << endl;

	cout << savingMoney.m_strBankName << "  |  " << savingMoney.getAccount() << "  |  " << savingMoney.getBalance() << endl;
}