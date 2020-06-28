#include <iostream>

/*
	this 포인터 개념

	1. 객체를 여러 개 생성할 때
	-> 멤버 데이터는 객체당 한 개씩 메모리에 놓이게 된다
	-> 멤버 함수는 객체의 개수에 상관없이 코드 메모리에 한개만 있다

	set은 자신을 호출한 객체가 p1인지 어떻게 알까?
	p1.set(10,20) -> set(&p1,10,20);

	2. this
	-> 멤버 함수 안에서 사용가능한 키워드.
	-> 자신을 호출한 객체의 주소를 담고 있다.
*/

class Point
{
	int x = 0;
	int y = 0;

public:
	void set(int a, int b)
	{
		std::cout << this << std::endl;
		x = a;
		y = b;
	}
};

int main()
{
	Point p1;
	Point p2;
}

int main()
{
	Point p1;
	Point p2;

	p1.set(10, 20);
	p2.set(30, 40);

	std::cout << &p1 << std::endl;
	std::cout << &p1 << std::endl;

}