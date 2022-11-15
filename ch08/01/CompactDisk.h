#pragma once
#include "Product.h"

class CompactDisk : public Product
{
	string albumName;
	string artistName;
public:
	CompactDisk(int type, string albumName, string artistName, int id, int price, string productor, string description);
	void showCompactDisk();
};

