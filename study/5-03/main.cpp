#include <iostream>
using namespace std;

int main() {
	cout << "i" << "\t" << "n" << "\t" << "refn" << endl;
	int i = 1;
	int n = 2;
	// �������� refn = 2
	int& refn = n;
	n = 4;
	// refn = 4, n = 4�� ��
	cout << i << "\t" << n << "\t" << refn << endl;
	// refn = 5, n = 5 �� �Ǵ� ����....�ּҷ� ������ �Ǳ� ������
	refn++;
	cout << i << "\t" << n << "\t" << refn << endl;
	// refn = 1
	refn = i;
	// refn = 2, i = 2 �� �Ǵ� ����
	refn++;
	cout << i << "\t" << n << "\t" << refn << endl;

	// p�� refn�� �ּҸ� ����
	int* p = &refn;
	// p = 20�̹Ƿ� refn = 20�� �ȴ�.
	*p = 20;
	cout << i << "\t" << n << "\t" << refn << endl;
	cout << *p << "\t" << &p << "\t" << p << endl;
}