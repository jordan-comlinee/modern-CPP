#include <iostream>
#include <string>
using namespace std;

// ����Ʈ �Ű����� ����....����Ʈ�� �� ���� �Ǵ� ����
//void star(int a = 5);
void msg(int id, string text = "");
// �Լ� ����
// int a ��� �� ���� ������ �ΰ��� ��ĥ ���� ����!
void star(int a = 5) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star();
	star(10);

	msg(10);
	msg(10, "Hello");
}