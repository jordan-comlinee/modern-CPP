#pragma once
class CCar
{
private:
	int odometer;
	int fuel;
public:
	CCar();
	void set_drivingDistance(int distance);
	void get_CarInfo(int *odo, int *fuel);
	void set_CarInfo(int odometer, int fuel);
};

