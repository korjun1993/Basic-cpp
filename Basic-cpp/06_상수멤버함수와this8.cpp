#include <iostream>

/*
	1. �̸� �浹 ��
	-> ����� �̸��� ���������� �̸��� ������ �� ���������� �켱�� �ȴ�.
	-> this�� ����ϸ� ����� ������ �� �ִ�.

	2. this�� ��ȯ�ϴ� �Լ�
	-> this �Ǵ� *this�� ��ȯ�ϸ� ��� �Լ��� ���������� ȣ���� �� �ִ�.
	-> cout�� ����

	[����] ���� ��ȯ
	-> *this�� ��ȯ�� ���� �ӽð�ü�� ������ ���� ���� "������ ��ȯ"�ؾ��Ѵ�.
*/

class Point
{
	int x = 0;
	int y = 0;

public:
	void set(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Point* set2(int x, int y)
	{
		this->x = x;
		this->y = y;
		return this;
	}

	Point set3(int x, int y)
	{
		this->x = x;
		this->y = y;
		return *this;
	}

	Point& set4(int x, int y)
	{
		this->x = x;
		this->y = y;
		return *this;
	}
};

int main()
{
	Point p1;
	p1.set(10, 20);
	p1.set2(10, 20)->set2(10, 20)->set2(10,20);
	p1.set3(10, 20).set3(10, 20).set3(10, 20);
	p1.set4(10, 20).set4(10, 20).set4(10, 20);
}