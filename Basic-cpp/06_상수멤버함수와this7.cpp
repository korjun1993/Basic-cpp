#include <iostream>

/*
	this ������ ����

	1. ��ü�� ���� �� ������ ��
	-> ��� �����ʹ� ��ü�� �� ���� �޸𸮿� ���̰� �ȴ�
	-> ��� �Լ��� ��ü�� ������ ������� �ڵ� �޸𸮿� �Ѱ��� �ִ�

	set�� �ڽ��� ȣ���� ��ü�� p1���� ��� �˱�?
	p1.set(10,20) -> set(&p1,10,20);

	2. this
	-> ��� �Լ� �ȿ��� ��밡���� Ű����.
	-> �ڽ��� ȣ���� ��ü�� �ּҸ� ��� �ִ�.
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