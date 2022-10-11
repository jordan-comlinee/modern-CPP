#include <iostream>
using namespace std;

int main() {
	int a[2][6] = { {1, 2, 3, 4, 5, 6}, {11, 22, 33, 44, 55, 66} };

	for(int(&k)[6] : a) {
		for (int& num : k)
			cout << k << " ";
		cout << endl;
	}
}