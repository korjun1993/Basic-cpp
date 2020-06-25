#include <iostream>

/*
	정적 멤버 데이터

	1. 객체의 생성과 소멸
	-> 모든 객체는 생성될 때 "생성자를 호출"하고
	-> 모든 객체는 파괴될 때 "소멸자를 호출"한다.

	2. 객체가 몇 개 생성되었는지 개수를 알고 싶다면
	-> 생성자에서 변수 값을 +1
	-> 소멸자에서 변수 값을 -1

	3. 객체의 개수를 관리할 변수가 필요하다
*/

class Car
{
	int speed;
	int color;

public:
	Car() {}
	~Car() {}
};

int main()
{
	Car c1;
	Car c2;
	Car c3;

}