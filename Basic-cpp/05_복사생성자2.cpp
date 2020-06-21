#include <iostream>

/*
	복사 생성자가 호출되는 3가지 경우
	
	1. 자신과 동일한 타입의 객체로 초기화될 때
	-> Point p2(p1)
	-> Point p2{p1}
	-> Point p2 = p1;	// explicit가 아닌 경우만

	2. 함수 인자를 call by value로 받을 경우
	-> 함수 인자를 const reference로 사용하면 복사본을 만들지 않으므로 (복사 생성자 + 소멸자)가 호출되지 않는다

	3. 함수가 객체를 값으로 반환할 때
	| x | 0 |	->	| x | 0 | ( 리턴용 임시 객체가 생성)
	| y | 0 |	->	| y | 0 | ( 이때 복사 생성자 호출)

	-> 참조로 반환하면 리턴용 임시객체가 생성되지 않는다
	-> 단, 지역변수는 참조로 반환하면 안된다
*/

class Point
{
public:
	int x;
	int y;

	Point(int a, int b) : x(a), y(b)
	{
		std::cout << "ctor" << std::endl;
	}

	
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

// void foo(Point pt)		// Point pt = p1		-> 복사생성자 호출 O
void foo(const Point& pt)	// const Point& pt = p1	-> 복사생성자 호출 X
{

}

Point p;

// Point goo()
Point& goo()
{
	return p;
}

int main()
{
	Point p1(1, 2);		// 생성자
	Point p2(p1);		// 복사 생성자
	Point p3{ p1 };		// 직접초기화
	Point p4 = { p1 };	// 복사초기화
	Point p5 = p1;		// 복사초기화

	foo(p1);
	goo(); // 리턴용 임시 객체는 다음줄에서 파괴
}