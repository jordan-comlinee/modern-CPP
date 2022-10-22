#include <iostream>
using namespace std;

int main() {
	cout << "i" << "\t" << "n" << "\t" << "refn" << endl;
	int i = 1;
	int n = 2;
	// 참조변수 refn = 2
	int& refn = n;
	n = 4;
	// refn = 4, n = 4가 됨
	cout << i << "\t" << n << "\t" << refn << endl;
	// refn = 5, n = 5 가 되는 거임....주소로 참조가 되기 때문에
	refn++;
	cout << i << "\t" << n << "\t" << refn << endl;
	// refn = 1
	refn = i;
	// refn = 2, i = 2 가 되는 거임
	refn++;
	cout << i << "\t" << n << "\t" << refn << endl;

	// p는 refn의 주소를 가짐
	int* p = &refn;
	// p = 20이므로 refn = 20이 된다.
	*p = 20;
	cout << i << "\t" << n << "\t" << refn << endl;
	cout << *p << "\t" << &p << "\t" << p << endl;
}