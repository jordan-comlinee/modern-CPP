#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout << *x << '\t' << *y << endl;

}


int main() {
	int n_a = 10;
	int n_b = 20;
	cout << n_a << '\t' << n_b << endl;
	swap(&n_a, &n_b);

	cout << n_a << '\t' << n_b << endl;
}