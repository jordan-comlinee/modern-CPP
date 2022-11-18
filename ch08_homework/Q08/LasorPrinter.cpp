#include "LasorPrinter.h"
#include "Printer.h"
#include <iostream>
#include <string>
using namespace std;

LasorPrinter::LasorPrinter(int availableToner, string model, string manufacturer, int availableCount)
	: Printer(model, manufacturer, availableCount) {
	this->availableToner = availableToner;
}

bool LasorPrinter::printLaser(int pages)
{
	if (this->availableToner < pages) {
		cout << "토너가 부족하여 프린트할 수 없습니다" << endl;
		return false;
	}
	else {
		if (Printer::print(pages)) {
			availableToner -= pages;
			return true;
		}
	}

}

void LasorPrinter::show()
{
	cout << "레이저 : ";
	Printer::show();
	cout << ",\t" << "남은 토너 " << availableToner << endl;
}
