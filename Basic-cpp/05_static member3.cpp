#include <iostream>

/*
	정적 멤버 데이터

	1. 객체의 개수를 관리하는 변수
	-> 모든 객체가 공유해야 한다.
	-> 외부에 잘못된 사용으로부터 보호할 수 있어야한다.

	2. 정적 멤버 데이터
	-> static이 붙은 멤버 데이터
	-> 모든 객체가 공유한다.
	-> 클래스 내부에 선언을 만들고
	-> 클래스 외부에 정의를 만들어야 한다.

	3. 정적 멤버 데이터의 특징
	-> 모든 객체가 공유한다.
	-> 멤버이므로 접근 지정자를 사용할 수 있다.

	정리하면, 모든 객체가 공유하면서 접근지정자로 외부에서 못건드리게 하고 싶을 때 static member 를 씀.
*/

class Car
{
	int speed;
	int color;
	static int cnt;

public:
	Car() { ++cnt; }
	~Car() { --cnt; }
	int getCount() { return cnt; }
};

int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;
	Car c3;

	// cnt = 0;	// 사용자가 cnt를 조작할 수 있음 -> 에러의 원인

	// std::cout << c1.cnt << std::endl;
	std::cout << c1.getCount() << std::endl;
}