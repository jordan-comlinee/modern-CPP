#include <iostream>
using namespace std;

// ������ ��� ����, �ּҿ� ���� ȣ��
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout << *x << '\t' << *y << endl;

}

// ������ ���� ȣ���� ���...
void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << x << '\t' << y << endl;

}


int main() {
	int n_a = 10;
	int n_b = 20;
	cout << n_a << '\t' << n_b << endl;
	// �ּҿ� ���� ȣ��
	swap(&n_a, &n_b);
	// ������ ���� ȣ��
	swap(n_a, n_b);
	cout << n_a << '\t' << n_b << endl;
}


//https://jhnyang.tistory.com/319 �� ���鼭 ���� �����غ��Ƶ� ���� �� ����.