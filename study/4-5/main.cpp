#include <iostream>
using namespace std;

int main() {
	int* p;

	// int Ÿ�� 1�� �Ҵ��Ͽ���
	p = new int;
	if (!p) {
		// p�� NULL�̸� �޸� �Ҵ翡 ������ ����.
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	// �޸𸮿� ����ִ� �����Ⱚ ���
	cout << "*p = " << *p << '\n';
	// �Ҵ���� int ������ 5 ����
	*p = 5;
	// n �� call by value�� �� ����
	int n = *p;
	cout << "*p = " << *p << '\n';
	cout << "n = " << n << '\n';
	// �Ҵ���� �޸� ��ȯ
	delete p;

}