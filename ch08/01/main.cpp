#include <iostream>
#include <string>
#include "Product.h"
#include "Book.h"
#include "CompactDisk.h"
#include "ConversationBook.h"
using namespace std;

int main() {
	cout << "--------���α׷� �۵� ����--------" << endl;
	//��ǰ ����Ʈ ����, �� ���� �ȿ� �ִ� ���� ��� �����Ⱚ���� ä������.
	void* p[100];
	//��ǰ ����Ʈ NULL�� �ʱ�ȭ
	for (int i = 0; i < 100; i++)
		p[i] = NULL;


	p[0] = new CompactDisk(1, "Nxde", "(����)IDLE", 0, 15000, "cube", "�������� �Ż�");
	//((CompactDisk*)p[0])->showCompactDisk();

	p[1] = new Book(2, "0001", "�̼ҿ�", "�Ľ�Ÿ������������", 1, 1000, "�ҿ�", "��������");
	//((Book*)p[1])->showBook();

	p[2] = new ConversationBook(3, "Korean", "0002", "�̼���", "���� ���� ���", 2, 5000, "����", "������!");
	//((ConversationBook*)p[2])->showConversationBook();


	Product* prd = NULL;

	for (int i = 0; i < 100; i++) {
		prd = (Product*)p[i];
		if (p[i] == NULL)
			break; 
		if (prd->type == 1) {
			CompactDisk* pDisk = (CompactDisk*)p[i];
		}
		if (prd->type == 2) {
			Book* pDisk = (Book*)p[i];
		}
		if (prd->type == 3) {
			ConversationBook* pDisk = (ConversationBook*)p[i];
		}
	}

	/*
	cout << "��ǰ �߰� : (1) ��ǰ ��ȸ : (2) ��ǰ ���� : (3)" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "��ǰ �߰��� �����ϼ̽��ϴ�." << endl;
		break;
	case 2:
		cout << "��ǰ ��ȸ�� �����ϼ̽��ϴ�." << endl;
		break;
	case 3:
		cout << "��ǰ ������ �����ϼ̽��ϴ�." << endl;
	default:
		break;
	}
	*/

	return 0;

}