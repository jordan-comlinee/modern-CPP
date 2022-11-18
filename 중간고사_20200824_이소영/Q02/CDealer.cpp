#include "CDealer.h"
#include <iostream>
using namespace std;

CDealer::CDealer() {
	this->m_nNumofCars = 0;
	this->BenzCars = NULL;
}

CDealer::CDealer(int m_nMumofCars, string m_strDealerName) {
	this->m_nNumofCars = m_nMumofCars;
	this->BenzCars = new CCar[m_nNumofCars];
	this->m_strDealerName = m_strDealerName;
}

CDealer::~CDealer() {
	delete[] BenzCars;
}

void CDealer::carDriving(int nDrivingDistance) {
	for (int i = 0; i < this->m_nNumofCars; i++) {
		BenzCars[i].set_drivingDistance(nDrivingDistance);
	}
}

void CDealer::carDriving(int nCarNumber, int nDrivingDistance) {
	if (nCarNumber < this->m_nNumofCars) {
		BenzCars[nCarNumber].set_drivingDistance(nDrivingDistance);
	}
}

CCar CDealer::getCarInfo(int num) {
	num = this->m_nNumofCars;
	return BenzCars[num];

}