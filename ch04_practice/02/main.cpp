#include <iostream>
#include <string>
using namespace std;

int main() {
	int* p = new int[5];
	int avg = 0;

	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		avg += p[i];
	}
	avg = avg / 5;
	cout << "평균 " << avg << endl;

}