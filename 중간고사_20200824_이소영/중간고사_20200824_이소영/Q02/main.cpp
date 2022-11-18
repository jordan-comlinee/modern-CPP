#include "CCar.h"
#include "CDealer.h"
#include <iostream>
using namespace std;

int main() {
	CDealer jiheonKang(3, "jiheon Kang");
	jiheonKang.carDriving(10);
	jiheonKang.carDriving(0, 5);
	jiheonKang.carDriving(1, 15);
	jiheonKang.carDriving(2, 20);


	int odo=0;
	int fuel=0;
	for (int i = 0; i < 3; i++) {
		jiheonKang.getCarInfo(i).get_CarInfo(&odo, &fuel);
		cout << i << "자동차: 주행거리 = " << odo << ",\t 남은연료" << fuel << endl;
	}
	
}