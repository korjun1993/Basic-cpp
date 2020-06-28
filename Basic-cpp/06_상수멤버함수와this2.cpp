#include <iostream>

/*
	1. 상수 멤버 함수가 필요한 이유
	-> 상수 객체는 상수 멤버 함수만 호출할 수 있다.

	2. const Point pt(1,1);
	-> 상수 객체이므로 객체의 상태를 변경할 수 없어야 한다.
	-> 하지만 상태를 얻거나 출력할 수는 있어야 한다.
	-> print 멤버 함수는 반드시 상수 멤버 함수로 해야 한다.
*/

class Point
{
public:
	int x, y;

public:
	Point(int a = 0, int b = 0) :x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	const Point pt(1, 1);	// 상수 객체
	pt.x = 10;			// error (멤버 값을 변경하니깐)
	pt.set(10, 10);		// error (멤버 값을 변경하니깐)
	pt.print();			// error (컴파일러는 값이 바뀌는지 안바뀌는지 모른다)
						// 단, print()가 상수 함수라면 ok...
}