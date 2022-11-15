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
	cout << "상품 ID: " << this->id << "\n상품 가격: " << this->price << "\n상품 제작자: " << this->productor << endl;
}