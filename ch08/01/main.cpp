#include <iostream>
#include <string>
#include <crtdbg.h>
#include "Product.h"
#include "Book.h"
#include "CompactDisk.h"
#include "ConversationBook.h"
using namespace std;

//static 변수, 객체가 생성되지 않더라도 생성 가능
int Product::numOfProduct = 0;

int main() {
	cout << "<     프로그램 작동 시작     >\n\n" << endl;
	// 상품 리스트 생성, 이 때는 안에 있는 값은 모두 쓰레기값으로 채워진다.
	void* p[100];
	// 상품 리스트 NULL로 초기화
	for (int i = 0; i < 100; i++)
		p[i] = NULL;

	// p 리스트에 물품 추가(생성자)
	p[0] = new CompactDisk("Nxde", "(여자)IDLE", 0, 15000, "cube", "따끈따끈 신상");

	p[1] = new Book("0001", "이소영", "파스타먹으러가야지", 1, 1000, "소영", "근데 배아프다");

	p[2] = new ConversationBook("Korean", "0002", "이수진", "빠른 종강", 2, 5000, "수진", "기원합니다");

	p[3] = new Book("0002", "문지영", "C++ 재밌다!", 3, 8700, "지영", "정말 재밌다");

	// p[i]의 타입을 알기 위해 생성자를 정의함
	//Product* prd = NULL;

	for (int i = 0; i < Product::numOfProduct; i++) {
		// prd는 p[i]로 설정
		// prd = (Product*)p[i];  
		// 만약 i번째 p 리스트에 아무것도 저장되어 있지 않으면
		if (p[i] == NULL)
			break;
		//Product* 로 타입 지정해주어야 함
		//타입에 따라 각각 다르게 정의
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

	// 생성자를 삭제함(소멸자)
	for (int i = 0; i < Product::numOfProduct; i++) {

		// Memory Leak 발생하는 코드
		/*
		if (p[i] != NULL)
			delete p[i];
		*/
		// 각 객체의 class 크기에 맞춰서 객체를 제거함
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
	// 메모리의 누수가 있는 지 확인하는 코드
	// 클래스에 맞게 삭제하지 않으면 메모리 누수가 발생해서 사용하지 못하는 공간이 발생한다.
	_CrtDumpMemoryLeaks();

	return 0;

}