#include <iostream>


/*
	멤버 초기화 리스트

	1. 멤버 초기화 리스트란?
	-> 생성자 괄호 () 뒤에 "콜론(:)을 표기하고 멤버를 초기화하는 것"

	2. 특징
	-> 대입이 아닌 "초기화"
*/

class Point
{
	int x;
	int y;

public:
	Point(int a, int b) : x(a), y(b) // 초기화
	{
		// x = a;	// 대입
		// y = b;
	}
};

int main()
{
	Point p(1, 2);

	int a = 0;	// 초기화. 생성자 호출

	int b;	// 객체라면 -> 생성자 호출
	b = 0;	// 대입. 대입연산자 호출
}