#pragma once
#include <string>
using namespace std;

class Histogram
{
	string s;
public:
	Histogram(string s);
	void put(string s);
	void putc(char c);
	void print();

};

