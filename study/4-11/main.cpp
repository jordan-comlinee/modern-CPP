#include <iostream>
#include <string>
using namespace std;

int main() {
	// �� ���ڿ��� ���� ��Ʈ�� ��ü ����
	string str;
	// ���ڿ��� ���� ��Ʈ�� ��ü ����
	string address("����Ư���� ����144���� 54");
	// address�� ���ڿ��� ������ ��Ʈ�� ��ü ����
	string copyAddress(address);

	// C-��Ʈ��
	char text[] = { 'H','a','t','e',',','C','+','+','\0' };
	// ���� ���ڿ��� ���� ��Ʈ�� ��ü ����
	string title(text);

	// �ƹ� ���� ��µ��� ����
	cout << str << endl;
	// �������� ��� ������!
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;

}