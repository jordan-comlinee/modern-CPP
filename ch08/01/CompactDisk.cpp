#include "CompactDisk.h"
#include <iostream>
#include <string>
using namespace std;

CompactDisk::CompactDisk(int type, string albumName, string artistName, int id, int price, string productor, string description)
	:Product(type, id, price, productor, description) {
	this->albumName = albumName;
	this->artistName = artistName;

}

void CompactDisk::showCompactDisk() {
	showProduct();
	cout << "�ٹ� ����: " << albumName << endl;
	cout << "���� �̸�: " << artistName << endl;
}
