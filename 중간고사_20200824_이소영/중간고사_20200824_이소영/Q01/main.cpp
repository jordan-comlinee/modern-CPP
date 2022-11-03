#include "Cpoint.h"
#include "CRect.h"
#include <iostream>
using namespace std;


int main() {
	int width, height;
	cout << "width 와 height를 순서대로 입력해주세요. >> ";
	cin >> width >> height;
	cout << "가로 길이: " << width << " 세로 길이: " << height << endl;
	CRect rect(width, height);
	cout << "면적은 " << rect.getArea() << endl;
}