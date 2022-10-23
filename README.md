# modern-CPP
<br><br>
어려운 부분, 헷갈리는 부분들을 모아두었습니다.
<br><br><br><br>
<h2>new 와 delete</h2>
<br>
new와 delete는 모두 C++의 기본 연산자이다
delete는 동적으로 배열을 생성한 경우 사용이 가능하다. 

```c++
Cube *c = new Cube[4];
delete [] c;
```

<h2> call by value VS call by reference VS call by address</h2>
<br>
<h2> 얕은 복사와 깊은 복사</h2>
<br>
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
