#pragma once
class Rectangle
{
public:
	// Ŭ���� ���ο��� ���� �ʱ�ȭ�� ��Ű�� ���� �������� ����
	int height = 1;
	int width = 1;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

