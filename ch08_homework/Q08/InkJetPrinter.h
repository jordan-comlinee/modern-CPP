#pragma once
#include "Printer.h"

class InkJetPrinter : public Printer
{
	int availableInk;
public:
	InkJetPrinter(int availableInk, string model, string manufacturer, int availableCount);
	bool printInkJet(int pages);
	void show();
};

