#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(int type, int id, int price, string productor, string description) {
	cout << "--------------------------" << endl;
	this->type = type;
	this->id = id;
	this->price = price;
	this->productor = productor;
	this->description = description;
}

void Product::showProduct() {
	cout << "��ǰ ID: " << this->id << "\n��ǰ ����: " << this->price << "\n��ǰ ������: " << this->productor << endl;
}