#include "Random.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Random::nextEven() {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 == 1);
	return n;
}

int Random::nextOdd() {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 == 0);
	return n;
}

int Random::nextInRangeEven(int start, int end) {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand() % (end - start + 1) + start;
	} while (n % 2 == 0);
	return n;
}

int Random::nextInRangeOdd(int start, int end) {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand() % (end - start + 1) + start;
	} while (n % 2 == 1);
	return n;
}

Random::~Random() {
	cout << "�Ҹ��� ����" << endl;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << " ������ ¦�� ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextEven();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ Ȧ�� ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRangeOdd(2, 9);
		cout << n << ' ';
	}
	cout << endl;

}