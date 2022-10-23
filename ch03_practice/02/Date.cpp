#include "Date.h"
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(string sdate) {
	int date = stoi(sdate);
	cout << date << endl;
	cout << typeid(date).name() << endl;
}

int main() {
	Date independenceDay("1945/8/15");


}