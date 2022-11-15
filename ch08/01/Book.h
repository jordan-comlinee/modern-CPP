#pragma once
#include "Product.h"
#include <string>
using namespace std;

class Book : public Product
{
	string isbn;
	string author;
	string title;
public:
	Book(int type, string isbn, string author, string title, int id, int price, string productor, string description);
	void showBook();
};

