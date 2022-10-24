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
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm'; // 'M' 위치에 'm' 기록 
    cout << s << endl; // "mike"가 출력됨 
}