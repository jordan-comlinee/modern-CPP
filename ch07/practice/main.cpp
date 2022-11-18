#include<iostream>
using namespace std;

int main() {
	// a에 10 저장
	int a = 10;
	// 포인터에 a를 나타내는 주소를 저장함
	// p = 0x10 같이 저장
	// *p = 10
	int* p = &a;
	// b에 a가 가리키는 값, 10을 저장
	int b = *p;
	// d는 참조형 변수...a를 부르는 또다른 이름같은 거임
	int& d = a;

	// p가 저장한 주소를 출력함
	cout << p << endl;
	// p가 가지고 있는 주소에 저장된 값을 출력함
	cout << *p << endl;
	// p라는 변수 자체의 주소를 출력함
	cout << &p << endl;
	cout << b << '\t' << d << endl;
	// 이런 경우에는 a와 d가 같은 주소를 가리키고 있는 것을 알 수 있음
	cout << &a << '\t' << &d << endl;

	// ++의 위치에 따른 x의 값의 차이
	int x = 1;
	cout << x << endl;

	int y = ++x;
	cout << x << endl;
	cout << y << endl;

	int z = x++;
	cout << x << endl;
	cout << z << endl;

	// 시프트 연산자 실습해보기
	int n = 1;
	cout << n << endl;
	// 2만큼 비트 왼쪽으로 넘어감....00000001 이라면 00000100 로
	n = n << 2;
	cout << n << endl;
	// 3만큼 비트 왼쪽으로 넘어감.... 2의 세제곱을 곱한 거랑 같음
	n = n << 3;
	cout << n << endl;
	// 3만큼 비트 오른쪽으로 넘어감.... 2의 세제곱을 나눈 거랑 같음
	n = n >> 3;
	cout << n << endl;
}
