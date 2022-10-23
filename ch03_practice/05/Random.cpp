#include "Random.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Random::next() {
	//srand((unsigned int)time(0));
	int n = rand();
	return n;
}

int Random::nextInRange(int start, int end) {
	//srand((unsigned int)time(0));
	int n = rand() % (end - start + 1) + start;
	return n;
}

Random::~Random() {
	cout << "�Ҹ��� ����" << endl;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << " ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;

}