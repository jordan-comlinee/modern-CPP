#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"
#include <iostream>
#include <cstring>
using namespace std;



Book::Book(const Book& b) {
	this->price = b.price;
	int len = strlen(b.title);
	this->title = new char[len + 1];
	strcpy(this->title, b.title);
	
}

Book::Book(const char *title, int price) {
	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);

}

Book::~Book() {
	delete[] title;

}

void Book::set(const char *title, int price) {
	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
}




/*
Book::Book(const Book& b) {
	this->title = title;
	this->price = price;
}

Book::Book(const string title, int price) {
	this->title = title;
	this->price = price;
}

Book::~Book() {
}

void Book::set(const string title, int price) {
	this->title = title;
	this->price = price;
}
*/

int main() {
	Book cpp("��ǰ C++", 10000);
	Book java = cpp; // ���� ������ ȣ��� 
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
