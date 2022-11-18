#pragma once
#include "Printer.h"
#include <string>
using namespace std;

class LasorPrinter : public Printer
{
	int availableToner;
public:
	LasorPrinter(int availableToner, string model, string manufacturer, int availableCount);
	bool printLaser(int pages);
	void show();
};

