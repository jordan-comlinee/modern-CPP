#include "Box.h"
#include <iostream>
using namespace std;

int main() {
	Box b(10, 4);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}