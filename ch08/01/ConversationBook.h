#pragma once
#include <string>
#include "Book.h"
using namespace std;

class ConversationBook : public Book
{
	string language;
public:
	ConversationBook(int type, string language, string isbn, string author, string title, int id, int price, string productor, string description);
	void showConversationBook();


};

