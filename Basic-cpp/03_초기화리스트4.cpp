#include <iostream>

/*
	주의사항

	멤버 초기화 리스트 사용시 x가 먼저 초기화 된다

	| x |
	| y |

	1. 초기화 순서
	-> 초기화 리스트의 순서대로 초기화되지 않고
	-> 멤버 데이터가 놓인 순서대로 초기화 된다
*/

class Point
{
public:
	int x;
	int y;

	Point() : y(0), x(y) {}
};

int main()
{
	Point p;
	std::cout << p.x << std::endl;	// 이상한값 나옴
}

