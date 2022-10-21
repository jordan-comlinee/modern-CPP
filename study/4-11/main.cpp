#include <iostream>
#include <string>
using namespace std;

int main() {
	// 빈 문자열을 가진 스트링 객체 생성
	string str;
	// 문자열을 가진 스트링 객체 생성
	string address("서울특별시 삼양로144가길 54");
	// address의 문자열을 복사한 스트링 객체 생성
	string copyAddress(address);

	// C-스트링
	char text[] = { 'H','a','t','e',',','C','+','+','\0' };
	// 위의 문자열을 가진 스트링 객체 생성
	string title(text);

	// 아무 값도 출력되지 않음
	cout << str << endl;
	// 나머지는 모두 생성됨!
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;

}