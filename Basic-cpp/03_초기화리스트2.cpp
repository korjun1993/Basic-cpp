#include <iostream>

class Point
{
	int x;
	int y;
	const int cval;
	int& r;

public:
	Point(int a, int b, int c, int d) : x(a), y(b), cval(c), r(d) // 초기화
	{
		// x = a;	// 대입
		// y = b;
		// cval = c; // 에러
	}
};

int main()
{
	// Point p(1, 2);

	int a = 0;	// 초기화. 생성자 호출

	int b;
	b = 0;
}