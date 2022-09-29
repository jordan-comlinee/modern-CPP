#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 30;
	//const int* p1 = &a;	// &a값은 바꿔도 되는데 p1은 바뀌면 안된다
	int* p1 = &a;			// p1은 바꿀 수 있다?
	int* const p2 = &a;		// 14번째 줄 처럼 두개 다 값을 바꿔서는 안된다
	
	a = 20;

	*p1 = 30;
	//p2 = &b;


	cout << a << endl;

}