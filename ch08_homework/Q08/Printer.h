#pragma once
#include <string>
using namespace std;

class Printer
{
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer(string model, string manufacturer, int availableCount);
	bool print(int pages);
	void show();
};

