#pragma once
class Rectangle
{
public:
	// 클래스 내부에서 변수 초기화를 시키는 것은 권장하지 않음
	int height = 1;
	int width = 1;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

