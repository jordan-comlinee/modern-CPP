#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"
#include <iostream>
#include <cstring>
using namespace std;

Book::Book(const Book& b) {
	this->title = title;
	this->price = price;
}

Book::Book(const char* title, int price) {
	int size = strlen(title) + 1;
	this->title = new char[size];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book() {
	delete title;
}

void Book::set(const char *title, int price) {
	if (this->title != NULL) {
		delete [] this->title;
	}
	int size = strlen(title) + 1;
	this->title = new char[size];
	strcpy(this->title, title);
	this->price = price;
}


int main() {
	Book cpp("명품 C++", 10000);
	Book java = cpp; // 복사 생성자 호출됨 
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
