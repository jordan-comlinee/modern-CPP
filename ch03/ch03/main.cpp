#include <iostream>
using namespace std;

// 포인터 사용 응용, 주소에 의한 호출
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout << *x << '\t' << *y << endl;

}

// 참조에 의한 호출의 경우...
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
	// 주소에 의한 호출
	swap(&n_a, &n_b);
	// 참조에 의한 호출
	swap(n_a, n_b);
	cout << n_a << '\t' << n_b << endl;
}


//https://jhnyang.tistory.com/319 를 보면서 따로 공부해보아도 좋을 것 같다.