#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}


int main() {
	// square(double a) ȣ��
	cout << square(3.0);
	// ������ ���� �߻�....�� ��ȯ���� ���� �Լ� �ߺ��� ��ȣ�� ���
	cout << square(3);
}