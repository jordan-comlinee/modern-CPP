#pragma once
#include <string>
using namespace std;

class Date
{
	int year, month, day;
public:
	Date(int year, int month, int day);
	Date(string sdate);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

