#include <iostream>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

double msg(int id, string s = " ") {
	cout << id << ": " << s << endl;
}


int main() {
	// ��� �ι�°�� �� ��Ȯ�ؼ� ���� �����ϵȴ�.
	msg(5, "Good Morning");
	// ����Ʈ �Ű� ������ ���� �Լ� �ߺ��� ��ȣ��
	msg(6);
}