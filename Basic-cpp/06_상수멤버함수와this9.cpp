#include <iostream>

/*
	1. ���� ��� �Լ� �ȿ����� this�� ����� �� ����
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