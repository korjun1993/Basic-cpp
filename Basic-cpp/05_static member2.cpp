#include <iostream>

/*
	정적 멤버 데이터
	
	1. 멤버 데이터를 사용해서 객체의 개수를 관리하는 경우
	-> 멤버 데이터는 "객체당 하나씩 별도의 메모리 공간" 사용

	-> 객체의 개수는 "항상 1"이다.

	2. 전역 변수를 사용해서 객체의 개수를 관리하는 경우
	-> 전역 변수는 "메모리에 하나만 있고, 모든 객체가 공유"
*/

int cnt = 0;

class Car
{
	int speed;
	int color;

public:
	// int cnt = 0;
	
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;
	Car c3;

	cnt = 0;	// 사용자가 cnt를 조작할 수 있음 -> 에러의 원인

	// std::cout << c1.cnt << std::endl;
	std::cout << cnt << std::endl;
}