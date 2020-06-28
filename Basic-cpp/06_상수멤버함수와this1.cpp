#include <iostream>

/*
	1. 상수 멤버 함수
	-> 함수 선언 및 구현시 함수 괄호 () 뒤에 const가 붙는 함수
	-> void print() const

	2. 상수 멤버 함수의 특징
	-> 상수 멤버 함수 안에서는 모든 멤버를 상수 취급한다
	-> 멤버 데이터의 값을 읽을 수는 있지만 변경할 수는 없다

	3. 상수 멤버 함수를 사용하는 이유
	-> 코드 작성시 안정성
	-> ★ 상수 객체는 상수 멤버 함수만 호출할 수 있다 

*/

class Point
{
	int x, y;

public:
	Point(int a = 0, int b = 0) :x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() const // 상수 멤버 함수
	{
		x = 10; // error
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{

}