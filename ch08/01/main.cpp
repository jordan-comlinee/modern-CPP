#include <iostream>
#include <string>
#include <crtdbg.h>
#include "Product.h"
#include "Book.h"
#include "CompactDisk.h"
#include "ConversationBook.h"
using namespace std;

//static ����, ��ü�� �������� �ʴ��� ���� ����
int Product::numOfProduct = 0;

int main() {
	cout << "<     ���α׷� �۵� ����     >\n\n" << endl;
	// ��ǰ ����Ʈ ����, �� ���� �ȿ� �ִ� ���� ��� �����Ⱚ���� ä������.
	void* p[100];
	// ��ǰ ����Ʈ NULL�� �ʱ�ȭ
	for (int i = 0; i < 100; i++)
		p[i] = NULL;

	// p ����Ʈ�� ��ǰ �߰�(������)
	p[0] = new CompactDisk("Nxde", "(����)IDLE", 0, 15000, "cube", "�������� �Ż�");

	p[1] = new Book("0001", "�̼ҿ�", "�Ľ�Ÿ������������", 1, 1000, "�ҿ�", "�ٵ� �������");

	p[2] = new ConversationBook("Korean", "0002", "�̼���", "���� ����", 2, 5000, "����", "����մϴ�");

	p[3] = new Book("0002", "������", "C++ ��մ�!", 3, 8700, "����", "���� ��մ�");

	// p[i]�� Ÿ���� �˱� ���� �����ڸ� ������
	//Product* prd = NULL;

	for (int i = 0; i < Product::numOfProduct; i++) {
		// prd�� p[i]�� ����
		// prd = (Product*)p[i];  
		// ���� i��° p ����Ʈ�� �ƹ��͵� ����Ǿ� ���� ������
		if (p[i] == NULL)
			break;
		//Product* �� Ÿ�� �������־�� ��
		//Ÿ�Կ� ���� ���� �ٸ��� ����
		if (((Product*)p[i])->type == 1) {
			((CompactDisk*)p[i])->printinfo();
		}
		else if (((Product*)p[i])->type == 2) {
			((Book*)p[i])->printinfo();
		}
		else if (((Product*)p[i])->type == 3) {
			((ConversationBook*)p[i])->printinfo();
		}
	}

	// �����ڸ� ������(�Ҹ���)
	for (int i = 0; i < Product::numOfProduct; i++) {

		// Memory Leak �߻��ϴ� �ڵ�
		/*
		if (p[i] != NULL)
			delete p[i];
		*/
		// �� ��ü�� class ũ�⿡ ���缭 ��ü�� ������
		if (p[i] != NULL) {
			//prd = (Product*)p[i];

			if (((Product*)p[i])->type == 1) {
				delete (CompactDisk*)p[i];
			}
			else if (((Product*)p[i])->type == 2) {
				delete (Book*)p[i];
			}
			else if (((Product*)p[i])->type == 3) {
				delete (ConversationBook*)p[i];
			}
		}
	}
	// �޸��� ������ �ִ� �� Ȯ���ϴ� �ڵ�
	// Ŭ������ �°� �������� ������ �޸� ������ �߻��ؼ� ������� ���ϴ� ������ �߻��Ѵ�.
	_CrtDumpMemoryLeaks();

	return 0;

}