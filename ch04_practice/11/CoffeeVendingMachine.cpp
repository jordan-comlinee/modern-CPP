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
		cout << "재료가 부족합니다" << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 1) {
		this->tong[0].consume();
		this->tong[1].consume();
		this->tong[1].consume();
		cout << "drink Americano" << endl;
	}
	else
		cout << "재료가 부족합니다" << endl;
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
		cout << "재료가 부족합니다" << endl;
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << this->tong[0].getSize() << ", 물 " << this->tong[1].getSize() << ", 설탕 " << this->tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int num;
	cout << "***** 커피 자판기를 작동합니다. *****\n";
	while (true) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
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