#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string isbn, string author, string title, int id, int price, string productor, string description)
	:Product(id, price, productor, description) {
	this->type = 2;
	this->isbn = isbn;
	this->author = author;
	this->title = title;
}

void Book::showBook() {
	showProduct();
	cout << "������ȣ: " << isbn << endl;
	cout << "����: " << author << endl;
	cout << "å ����: " << title << endl;
}

void Book::printinfo() {
	Product::printinfo();
	cout << "������ȣ: " << isbn << endl;
	cout << "����: " << author << endl;
	cout << "å ����: " << title << endl;
}