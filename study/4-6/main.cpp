#include <iostream>
using namespace std;


int main() {
	int num;
	cout << "입력할 정수의 개수는?: ";
	cin >> num;
	if (num <= 0)
		return 0;

	int* p = new int[num];

	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 정수: ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += p[i];
	}
	cout << "합: " << sum << endl;

	delete[] p;

}