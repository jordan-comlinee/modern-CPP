#include <iostream>
using namespace std;

char& find(char a[], char c, bool& sucess) {
    int size = sizeof(a);
    for (int i = 0; i < size; i++) {
        if (a[i] == c) {
            sucess = true;
            return a[i];
        }
   }
}

int main() {
    char s[] = "Mike";
    bool sucess = false;
    char& loc = find(s, 'M', sucess);
    if (sucess == false) {
        cout << "M�� �߰��� �� ����" << endl;
        return 0;
    }
    loc = 'm'; // 'M' ��ġ�� 'm' ��� 
    cout << s << endl; // "mike"�� ��µ� 
}