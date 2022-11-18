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
		cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
		return false;
	}
	else {
		cout << "프린트 하였습니다." << endl;
		this->availableCount -= pages;
		this->printedCount += pages;
		return true;
	}

}

void Printer::show()
{
	cout << this->model << ",\t" << this->manufacturer << ",\t남은 종이 " << this->availableCount;
}
