#include "Sample.h"
#include <iostream>
using namespace std;

Sample::Sample(int n) {
	size = n;
	p = new int[n];
}

void Sample::read() {
	cout << "���� 10���� �Է����ּ���.";
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int Sample::big() {
	int big = 0;
	for (int i = 0; i < size; i++) {
		if (big < p[i])
			big = p[i];
	}
	return big;
}

Sample::~Sample() {
	delete[] p;
}


int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}