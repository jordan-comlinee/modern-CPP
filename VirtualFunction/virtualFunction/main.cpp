#include <iostream>
using namespace std;

class Product
{
public:
	double m_nID;
	// 주석대로 수행 시 memory leak 발생함....생성자는 2개인데 소멸자가 1개만 호출됨 (자식 클래스는 삭제되지 않음. 따라서 virtual을 앞에 꼭 붙여주어야 함!!)
	//virtual void print() { cout << "Product Info" << endl; }
	void print() { cout << "Product Info" << endl; }
	Product() { cout << "Called Product Collection" << endl; }
	//~Product() { cout << "Called Product Destruction" << endl; }
	virtual ~Product() { cout << "Called Product Destruction" << endl; }
};

class Book : public Product
{
public:
	double m_nISBN;
	//void print() override { cout << "Book Info" << endl; }
	void print() { cout << "Book Info" << endl; }
	Book() { cout << "Called Book Collection" << endl; }
	//~Book() { cout << "Called Book Destruction" << endl; }
	virtual ~Book() { cout << "Called Book Destruction" << endl; }
};

int main() {
	
	double type = 0;
	Product* proPtr = new Book;
	//Book myBook;
	proPtr->print();
	delete proPtr;


	return 0;
}