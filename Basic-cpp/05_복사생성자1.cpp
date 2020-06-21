#include <iostream>

/*
	1. 복사 생성자란?
	-> 자신과 동일한 타입 한 개를 인자로 가지는 생성자

	2. 사용자가 복사 생성자를 만들지 않으면
	-> 컴파일러가 제공
	-> 디폴트 복사 생성자 (default copy constructor)
	-> 모든 멤버를 복사한다
*/

class Point
{
public:
	int x;
	int y;

	Point()				: x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	// 사용자가 만드는 복사 생성자
	Point(const Point& p) : x(p.x), y(p.y) { std::cout << "copy ctor" << std::endl; }
};

int main()
{
	Point p1;			// ok (1)
	Point p2(1, 2);		// ok (2)
	// Point p3(1);		// error
	Point p4(p2);		// ok Point(Point p) ?

	std::cout << p4.x << std::endl;	// 1
	std::cout << p4.y << std::endl;	// 2
}