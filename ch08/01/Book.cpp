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
	cout << "도서번호: " << isbn << endl;
	cout << "저자: " << author << endl;
	cout << "책 제목: " << title << endl;
}

void Book::printinfo() {
	Product::printinfo();
	cout << "도서번호: " << isbn << endl;
	cout << "저자: " << author << endl;
	cout << "책 제목: " << title << endl;
}