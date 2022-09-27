#include <vector>
#include <iostream>
using namespace std;

int main(void) {
	vector<int> fibonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (auto& number : fibonacci)
		cout << number << ' ';

	cout << endl;


	int fibo[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (int index = 0; index < sizeof(fibo) / sizeof(int); index++)
		cout << fibo[index] << ' ';

	cout << endl;

	for (int number : fibo)
		cout << number << ' ';

	return 0;
}