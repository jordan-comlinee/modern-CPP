#include <iostream>

#include <string>

using namespace std;



int main() {




	float a = 1.1;
	float b = 1.2;
	float c = a + b;
	float d = 2.3;

	// false�� ������ ������?? : ��ǻ�ʹ� �ε��Ҽ��� ������ �ϹǷ� 0.1�� ����� ��Ʊ� ����...��� ���� ���������� ǥ���Ǳ� ������ 0.1�� ���ѼҼ��� �ȴ�!!
	if (c == d)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
	
	/*
	//NO.3

	cout << "hello world!" << endl;

	string sMy_full_name;



	getline(cin, sMy_full_name);

	cout << "����� �̸��� " << sMy_full_name << "�Դϴ�." << endl;

	
	*/


	/*

	//NO.2

	int weight;

	cin >> weight;

	cout << "����� �����Դ� " << weight << "�Դϴ�." << endl;

	*/



	/*

	// NO.1

	int a;

	int b = 20;



	cout << "a�� ���� �Է����ּ���." << endl;

	cin >> a;

	cout << a << endl;



	int* pa = &a;

	int* pb = &b;



	// (__int64)�� ���� �ּҰ��� int������ ��ȯ�Ͽ� �� �� �ִ�... 1��° = 3��°, 2��° = 4��° int �ڷ����̹Ƿ� �ּҰ��� ���̴� 4��ŭ ����.

	cout << (__int64)&a << endl;

	cout << (__int64)&b << endl;

	cout << (__int64)pa << endl;

	cout << (__int64)pb << endl;

	*/



	return 0;

}