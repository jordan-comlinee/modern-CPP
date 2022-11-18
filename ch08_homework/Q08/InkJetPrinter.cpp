#include "InkJetPrinter.h"
#include "Printer.h"
#include <iostream>
#include <string>
using namespace std;

InkJetPrinter::InkJetPrinter(int availableInk, string model, string manufacturer, int availableCount)
	: Printer(model, manufacturer, availableCount) {
	this->availableInk = availableInk;
}

bool InkJetPrinter::printInkJet(int pages){
	if (this->availableInk < pages) {
		cout << "토너가 부족하여 프린트할 수 없습니다" << endl;
		return false;
	}
	else {
		if (Printer::print(pages)) {
			availableInk -= pages;
			return true;
		}
	}
}

void InkJetPrinter::show()
{
	cout << "잉크젯 : ";
	Printer::show();
	cout << ",\t" << "남은 잉크 " << availableInk << endl;
}
