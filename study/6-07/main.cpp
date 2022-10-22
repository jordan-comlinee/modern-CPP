#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}


int main() {
	// square(double a) 호출
	cout << square(3.0);
	// 컴파일 오류 발생....형 변환으로 인한 함수 중복이 모호한 경우
	cout << square(3);
}