#include "Cpoint.h"
#include "CRect.h"
#include <iostream>
using namespace std;


int main() {
	int width, height;
	cout << "width �� height�� ������� �Է����ּ���. >> ";
	cin >> width >> height;
	cout << "���� ����: " << width << " ���� ����: " << height << endl;
	CRect rect(width, height);
	cout << "������ " << rect.getArea() << endl;
}