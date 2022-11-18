#include "Printer.h"
#include <iostream>
#include <string>
using namespace std;



Printer::Printer(string model, string manufacturer, int availableCount)
{
	this->model = model;
	this->manufacturer = manufacturer;
	this->availableCount = availableCount;
}

bool Printer::print(int pages)
{
	if (this->availableCount < pages) {
		cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
		return false;
	}
	else {
		cout << "����Ʈ �Ͽ����ϴ�." << endl;
		this->availableCount -= pages;
		this->printedCount += pages;
		return true;
	}

}

void Printer::show()
{
	cout << this->model << ",\t" << this->manufacturer << ",\t���� ���� " << this->availableCount;
}
