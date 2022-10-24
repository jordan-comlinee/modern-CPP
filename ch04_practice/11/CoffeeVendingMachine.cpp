#include "CoffeeVendingMachine.h"
#include <iostream>
using namespace std;

void CoffeeVendingMachine::fill() {
	this->tong[0].fill();
	this->tong[1].fill();
	this->tong[2].fill();
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 0) {
		this->tong[0].consume();
		this->tong[1].consume();
		cout << "drink Epresso" << endl;
	}
	else
		cout << "��ᰡ �����մϴ�" << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 1) {
		this->tong[0].consume();
		this->tong[1].consume();
		this->tong[1].consume();
		cout << "drink Americano" << endl;
	}
	else
		cout << "��ᰡ �����մϴ�" << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 1 && tong[2].getSize() > 0) {
		this->tong[0].consume();
		this->tong[1].consume();
		this->tong[1].consume();
		this->tong[2].consume();
		cout << "drink Suger Coffee" << endl;
	}
	else
		cout << "��ᰡ �����մϴ�" << endl;
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << this->tong[0].getSize() << ", �� " << this->tong[1].getSize() << ", ���� " << this->tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int num;
	cout << "***** Ŀ�� ���Ǳ⸦ �۵��մϴ�. *****\n";
	while (true) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>>";
		cin >> num;
		switch (num) {
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		}
	}

}