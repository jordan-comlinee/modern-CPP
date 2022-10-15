#pragma once
#include <string>
using namespace std;


class CPizza
{
	int radius;
	string topping;
public:
	void setRadius(int radius);
	void setTopping(string topping);
	int getRadius();
	string getTopping();

	CPizza();
	CPizza(int radius);
};

