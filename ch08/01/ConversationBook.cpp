#include "ConversationBook.h"
#include <iostream>
#include <string>
using namespace std;

ConversationBook::ConversationBook(int type, string language, string isbn, string author, string title, int id, int price, string productor, string description)
	: Book(type, isbn, author, title, id, price, productor, description) {
	this->language = language;
}

void ConversationBook::showConversationBook() {
	showBook();
	cout << "사용 언어: " << this->language << endl;

}