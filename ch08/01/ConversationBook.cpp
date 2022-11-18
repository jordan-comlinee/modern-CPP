#include "ConversationBook.h"
#include <iostream>
#include <string>
using namespace std;

ConversationBook::ConversationBook(string language, string isbn, string author, string title, int id, int price, string productor, string description)
	: Book(isbn, author, title, id, price, productor, description) {
	this->type = 3;
	this->language = language;
}

void ConversationBook::showConversationBook() {
	showBook();
	cout << "사용 언어: " << this->language << endl;

}

void ConversationBook::printinfo() {
	Book::printinfo();
	cout << "사용 언어: " << this->language << endl;
}