#include "CCar.h"
#include <iostream>
using namespace std;


CCar::CCar() {
	this->odometer = 0;
	this->fuel = 30;
}

void CCar::set_drivingDistance(int distance) {
	if (this->fuel > distance) {
		this->odometer += distance;
		fuel -= distance;
	}
	else
		cout << "주행 실패!!" << endl;
}

void CCar::get_CarInfo(int* odo, int* fuel) {
	odo = &(this->odometer);
	fuel = &(this->fuel);
}

void CCar::set_CarInfo(int odometer, int fuel) {
	this->odometer = odometer;
	this->fuel = fuel;
}