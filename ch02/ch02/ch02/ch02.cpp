#include <iostream>

#include <string>

using namespace std;



int main() {




	float a = 1.1;
	float b = 1.2;
	float c = a + b;
	float d = 2.3;

	// false가 나오는 이유는?? : 컴퓨터는 부동소수점 연산을 하므로 0.1의 계산이 어렵기 때문...모든 수가 이진법으로 표현되기 때문에 0.1은 무한소수가 된다!!
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

	cout << "당신의 이름은 " << sMy_full_name << "입니다." << endl;

	
	*/


	/*

	//NO.2

	int weight;

	cin >> weight;

	cout << "당신의 몸무게는 " << weight << "입니다." << endl;

	*/



	/*

	// NO.1

	int a;

	int b = 20;



	cout << "a의 값을 입력해주세요." << endl;

	cin >> a;

	cout << a << endl;



	int* pa = &a;

	int* pb = &b;



	// (__int64)를 통해 주소값을 int형으로 변환하여 볼 수 있다... 1번째 = 3번째, 2번째 = 4번째 int 자료형이므로 주소값의 차이는 4만큼 난다.

	cout << (__int64)&a << endl;

	cout << (__int64)&b << endl;

	cout << (__int64)pa << endl;

	cout << (__int64)pb << endl;

	*/



	return 0;

}