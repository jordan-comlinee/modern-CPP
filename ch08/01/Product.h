#pragma once
#include <string>
using namespace std;

class Product
{
	
	int id;
	int price;
	string productor;
	string description;
public:
	int type;
	Product(int type, int id, int price, string productor, string description);
	void showProduct();
};

