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
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
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
	cout << "��ũ�� : ";
	Printer::show();
	cout << ",\t" << "���� ��ũ " << availableInk << endl;
}
