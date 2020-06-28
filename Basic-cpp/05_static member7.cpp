#include <iostream>

/*
	1. 정적 멤버 함수
	-> 객체 없이 호출 가능한 멤버 함수
	-> 클래스 이름::함수이름()으로 호출

	2. 정적 멤서 함수를 호출하는 2가지 방법
	-> 클래스 이름으로 호출
	Car::getCount();

	-> 객체 이름으로 호출
	c1.getCount();

	3. 객체 이름보다는 클래스 이름을 사용하는 것이 좋다
*/

class Car
{
	int speed;
	int color;
	static int cnt;

public:
	Car() { ++cnt; }
	~Car() { --cnt; }
	static int getCount() { return cnt; }
};

int Car::cnt = 0;

int main()
{	
	std::cout << Car::getCount() << std::endl;
}