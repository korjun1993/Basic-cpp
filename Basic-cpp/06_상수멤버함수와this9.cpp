#include <iostream>

/*
	1. 정적 멤버 함수 안에서는 this를 사용할 수 없다
*/

class Test
{
public:
	static void foo()
	{

	}
};

int main()
{
	Test::foo();

	Test t;
	t.foo();
}