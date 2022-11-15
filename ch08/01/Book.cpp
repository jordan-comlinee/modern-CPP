#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(int type, string isbn, string author, string title, int id, int price, string productor, string description)
	:Product(type, id, price, productor, description) {
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