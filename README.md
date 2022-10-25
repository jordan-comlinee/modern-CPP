# modern-CPP
<br><br>
어려운 부분, 헷갈리는 부분들을 모아두었습니다.
<br><br><br><br>
<h2>new 와 delete</h2>
<br>
new와 delete는 모두 C++의 기본 연산자이다.
<br>
delete는 동적으로 배열을 생성한 경우 사용이 가능하다. 

```c++
Cube *c = new Cube[4];
delete [] c;
```
<h2>strlen & sizeof</h2>
<br>
strlen은 할당받은 문자열의 길이....NULL을 제외함
sizeof는 데이터가 할당받은 메모리 바이트의 길이
<h2> call by value VS call by reference VS call by address</h2>
<br>
value : 값을 그대로 복사하므로 따로 메모리를 할당한다.
reference : &
address : *
<h2> 얕은 복사와 깊은 복사</h2>
<br>
얕은 복사는 주소를 공유하지만 깊은 복사는 주소를 공유하지 않음(자원을 공유하지 않음)
주소, 메모리를 공유하게 되면 소멸자를 실행할 때 먼저 하나가 소멸되면 이전에 만들어졌던 객체가 같은 메모리를 또 소멸시킨다....이 때 오류 발생.
동적 할당 시에는 무조건 깊은 복사를 써야 함!!!
<h2> const 키워드</h2>
<br>
<h4> 일반 변수에서의 const</h4>
<br>
변수를 상수화함. const로 정의한 변수는 재정의할 수 없다!!

```c++
const int x = 4;
// 이렇게 할 수 없다는 말씀~!
x = 10;
```

<h4> 포인터 변수에서의 const</h4>
<br>
class를 나타내는 변수 앞에 작성된다.
class 내 멤버 변수를 모두 복사해야 한다!

<h2>this와 *this의 차이점</h2>
<br>
this는 자기 자신을 가르키고 있는 포인터 개념이고

*this는 자기 자신의 클래스 그 자체라고 보시면 됩니다.
