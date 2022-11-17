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
	cout << "상품 type: " << this->type << "\n상품 ID: " << this->id << "\n상품 가격: " << this->price << "\n상품 제작자: " << this->productor << "\n설명:" << this->description << endl;
}

// 다른 구현부 파일에는 printinfo가 재정의 되어 있음
void Product::printinfo() {
	cout << "--------------------------" << endl;
	cout << "상품 type: " << this->type << "\n상품 ID: " << this->id << "\n상품 가격: " << this->price << "\n상품 제작자: " << this->productor << "\n설명:" << this->description << endl;
}