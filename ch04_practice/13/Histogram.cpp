#include "Histogram.h"
#include <iostream>
using namespace std;

Histogram::Histogram(string s) {
	this->s = s;
}

void Histogram::put(string s) {
	this->s.append(s);
}

void Histogram::putc(char c) {
	char buf[] = { c, '\0' };
	this->s.append(buf);
}

void Histogram::print() {
	cout << s << endl;

	cout << "ÃÑ ¾ËÆÄºª ¼ö " << s.length() / 2 << endl;
}
