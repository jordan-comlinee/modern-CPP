#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 30;
	//const int* p1 = &a;	// &a���� �ٲ㵵 �Ǵµ� p1�� �ٲ�� �ȵȴ�
	int* p1 = &a;			// p1�� �ٲ� �� �ִ�?
	int* const p2 = &a;		// 14��° �� ó�� �ΰ� �� ���� �ٲ㼭�� �ȵȴ�
	
	a = 20;

	*p1 = 30;
	//p2 = &b;


	cout << a << endl;

}