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
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
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
	cout << "������ : ";
	Printer::show();
	cout << ",\t" << "���� ��� " << availableToner << endl;
}
