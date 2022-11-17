#include "CompactDisk.h"
#include <iostream>
#include <string>
using namespace std;

CompactDisk::CompactDisk(string albumName, string artistName, int id, int price, string productor, string description)
	:Product(id, price, productor, description) {
	this->type = 1;
	this->albumName = albumName;
	this->artistName = artistName;

}

void CompactDisk::showCompactDisk() {
	showProduct();
	cout << "�ٹ� ����: " << albumName << endl;
	cout << "���� �̸�: " << artistName << endl;
}

void CompactDisk::printinfo() {
	Product::printinfo();
	cout << "�ٹ� ����: " << albumName << endl;
	cout << "���� �̸�: " << artistName << endl;
}
