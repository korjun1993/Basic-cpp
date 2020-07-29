#include <iostream>

/*
	1. mutable 멤버 데이터
	-> 상수 멤버 함수 안에서도 값을 변경할 수 있다.


*/

class Point
{
public:
	int x, y;
	mutable int cnt = 0;

public:
	Point(int a = 0, int b = 0) :x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() const
	{
		++cnt;
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	const Point pt(1, 1);	// 상수 객체
	pt.print();			// error (컴파일러는 값이 바뀌는지 안바뀌는지 모른다)
						// 단, print()가 상수 함수라면 ok...
}