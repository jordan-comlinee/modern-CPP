#include "Tower.h"
#include <iostream>
using namespace std;

Tower::Tower() {
	height = 1;
}

Tower::Tower(int height) {
	this->height = height;
}

int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}