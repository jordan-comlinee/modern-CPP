#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(int id, int price, string productor, string description) {
	this->type = 0;
	this->type = type;
	this->id = id;
	this->price = price;
	this->productor = productor;
	this->description = description;
	numOfProduct++;
}

void Product::showProduct() {
	cout << "--------------------------" << endl;
	cout << "��ǰ type: " << this->type << "\n��ǰ ID: " << this->id << "\n��ǰ ����: " << this->price << "\n��ǰ ������: " << this->productor << "\n����:" << this->description << endl;
}

// �ٸ� ������ ���Ͽ��� printinfo�� ������ �Ǿ� ����
void Product::printinfo() {
	cout << "--------------------------" << endl;
	cout << "��ǰ type: " << this->type << "\n��ǰ ID: " << this->id << "\n��ǰ ����: " << this->price << "\n��ǰ ������: " << this->productor << "\n����:" << this->description << endl;
}