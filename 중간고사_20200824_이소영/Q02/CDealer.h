#pragma once
#include "CCar.h"
#include <string>
using namespace std;

class CDealer
{
private:
	int m_nNumofCars;
	CCar* BenzCars;
public:
	string m_strDealerName;
	CDealer();
	CDealer(int m_nNumofCars, string m_strDealerName);
	~CDealer();
	void carDriving(int nDrivingDistance);
	void carDriving(int nCarNumber, int nDrivingDistance);
	CCar getCarInfo(int num);

};

